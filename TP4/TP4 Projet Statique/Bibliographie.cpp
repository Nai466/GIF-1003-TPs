/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Bibliographie.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:53
 */
#include "Bibliographie.h"
#include "Reference.h"
#include <string>
#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include "ReferenceException.h"

using namespace util;

using namespace std;

/*namespace biblio*/

namespace biblio
{


  /**
   * \brief constructeur de la classe Bibliographie.
   *
   * \param[in] p_nomBibliographie le nom de la bibliographie.
   * \param[in] p_identifiant l'identifiant d'une reference soit le code issn ou le code isbn
   *
   *
   * \pre le nom de la bibliographie ne doit pas être vide.
   * \post p_nomBibliographie prend la valeur de m_nomBibliographie.
   *
   *
   */


  Bibliographie::Bibliographie (const std::string& p_nomBibliographie) : m_nomBibliographie (p_nomBibliographie)
  {

    PRECONDITION (m_nomBibliographie.empty () == false);
    PRECONDITION (m_vReferences.size () == 0);
    POSTCONDITION (m_nomBibliographie == p_nomBibliographie);
    INVARIANTS ();

    //déclarer les invariants

  }


  /**
   * \brief déstructeur de la classe Bibliographie
   */


  Bibliographie::~Bibliographie ()
  {



    for (std::vector<biblio::Reference*>::iterator iterateur = m_vReferences.begin () ; iterateur != m_vReferences.end (); ++iterateur)
      {
        delete *iterateur;
      }


  }


  /**
   * \brief vérifie si une reference est déja présente dans la bibliographie.
   * \param[in] p_identifiant l'identifiant de cette reference soit le code issn ou le code isbn.
   * \return true si la reference est déja présente dans la bibliographie et false sinon.
   */


  bool
  Bibliographie::referenceEstDejaPresente (const std::string& p_identifiant) const
  {

    util::validerCodeIsbn (p_identifiant) || util::validerCodeIssn (p_identifiant);

    bool estPresent = false;

    for (std::vector<biblio::Reference*>::const_iterator it = this->m_vReferences.begin (); it != this->m_vReferences.end (); ++it)
      {

        if ((*it)->reqIdentifiant () == p_identifiant)
          {

            return !estPresent;

          }

      }


    return estPresent;

  }


  /**
   * \brief accesseur de l'atribut m_nomBibliographie
   * \return le nom de la bibliographie
   */


  const std::string&
  Bibliographie::reqNomBibliographie () const
  {


    return m_nomBibliographie;

  }


  /**
   * \brief une méthode qui ajoute un pointeur vers une reference passée en paramètre dans son attribut mvReferences.
   * \param[in] p_nouvelleReference la reference que nous desirions ajouter , cette reference peut etre un ouvrage ou un journal.
   */

  void
  Bibliographie::ajouterReference (const Reference& p_nouvelleReference)
  {


    if (this->referenceEstDejaPresente (p_nouvelleReference.reqIdentifiant ()) == false)
      {
        this->m_vReferences.push_back (p_nouvelleReference.clone ());

      }
    else
      {

        throw ReferenceDejaPresenteException ("Vous ne pouvez pas ajouter cette référence elle existe déjà.");


      }

    POSTCONDITION (*(m_vReferences.at (m_vReferences.size () - 1)) == p_nouvelleReference);

    INVARIANTS ();



  }


  /**
   * \brief un constructeur copie de la classe Bibliographie.
   * \param[in] la bibliographie à partir de laquelle on veut créer une nouvelle bibliographie
   */

  Bibliographie::Bibliographie (const biblio::Bibliographie& p_Bibliographie) : m_nomBibliographie (p_Bibliographie.m_nomBibliographie)
  {



    for (std::vector<biblio::Reference*>::const_iterator it = p_Bibliographie.m_vReferences.begin () ; it != p_Bibliographie.m_vReferences.end (); ++it)
      {

        this->m_vReferences.push_back ((*it)->clone ());

      };

    INVARIANTS ();

  }


  /**
   * \brief une méthode qui crée un string qui contient tout les informations de la bibliographie d'une manière organisée.
   * \return ce string créé.
   */


  std::string
  Bibliographie::reqBibliographieFormate () const
  {

    int i = 0;

    std::ostringstream ss;

    ss << "Bibliographie" << endl;

    ss << "===============================" << endl;


    for (std::vector<Reference*>::const_iterator it = m_vReferences.begin () ; it != m_vReferences.end () ; it++)
      {

        ss << "[" << i + 1 << "]" << (*it)->reqReferenceFormate () << endl;
        i++;
      }

    INVARIANTS ();

    return ss.str ();

  }


  /**
   * \brief la surcharge de l'operateur d'assignation.
   * \param[in] la bibliographie à partir de laquelle on veut assigner les valeurs d'attributs dans notre bibliographie.
   * \return la bibliographie avec de nouvelles valeurs d'attributs.
   */


  const Bibliographie& Bibliographie::operator= (const Bibliographie& p_Bibliographie)
  {

    if (this == &p_Bibliographie)
      {
        return *this;
      }
    this->m_nomBibliographie = p_Bibliographie.m_nomBibliographie;



    for (std::vector<biblio::Reference*>::const_iterator it = p_Bibliographie.m_vReferences.begin () ; it != p_Bibliographie.m_vReferences.end (); ++it)
      {
        this->m_vReferences.erase (it);
      }

    for (std::vector<biblio::Reference*>::const_iterator it = p_Bibliographie.m_vReferences.begin (); it != p_Bibliographie.m_vReferences.end (); ++it)
      {
        this->m_vReferences.push_back ((*it)->clone ());
      }
    return *this;

    INVARIANTS ();


  }


  /**
   * \brief méthode qui supprime une reference apres son inscription
   * \param[in] p_identifiant l'identifiant d'une reference
   */

  void
  Bibliographie::supprimerReference (const std::string& p_identifiant)
  {

    if (!referenceEstDejaPresente (p_identifiant))
      {

        throw ReferenceAbsenteException ("il n'existe aucune reference avec l'identifiant  " + p_identifiant);

      }



    for (std::vector<biblio::Reference*>::iterator it = this->m_vReferences.begin (); it != this->m_vReferences.end (); ++it)
      {

        if ((*it)->reqIdentifiant () == p_identifiant)
          {

            delete (*it);
            it = m_vReferences.erase (it);
            it--;

          }


      }


  }


  /**
   * \brief méthode qui sert à verifier si les valeurs des attributs sont valides
   */


  void
  Bibliographie::verifieInvariant () const
  {

    INVARIANT (m_nomBibliographie.empty () == false);


  }



} /*namespace biblio*/

