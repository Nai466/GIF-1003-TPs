/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Reference.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:51
 */
#include "Reference.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

using namespace util;


/* namespace biblio */

namespace biblio
{


  /**
   *\brief constructeur de la classe Reference.
   *       Création d'un objet Reference à partir de valeurs passées en paramètres.
   *
   *\param[in] p_annee l'année d'édition du livre.
   *\param[in] p_auteur le nom complet sous format valide de l'auteur valide;
   *\param[in] p_identifiant l'identifiant de la reference du code il peut être soit le code ISSN ou le code ISBN.
   *\param[in] p_titre le titre du livre de la reference.
   *
   *
   *\pre le nom de l'auteur ne doit pas être vide
   *\pre le titre de la reference ne doit pas etre vide.
   *\pre l'identifiant ne doit pas etre vide.
   *\pre l'annee doit etre superieur stricte à 0.
   *
   *
   *\post m_auteurs prend la valeur de p_auteur
   *\post m_titre prend la valeur de p_titre
   *\post m_annee prend la valeur de p_annee
   *\post m_identifiant prend la valeur de p_identifiant.
   *
   *
   */

  Reference::Reference (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant) : m_annee (p_annee), m_auteurs (p_auteur), m_titre (p_titre), m_identifiant (p_identifiant)
  {

    //on déclare les postconditions et on déclare aussi les préconditions d'abord.

    PRECONDITION (util::validerFormatNom (p_auteur));
    PRECONDITION (p_titre.empty () == false);
    PRECONDITION (p_identifiant.empty () == false);
    PRECONDITION (p_annee > 0);

    POSTCONDITION (m_auteurs == p_auteur);
    POSTCONDITION (m_titre == p_titre);
    POSTCONDITION (m_annee = p_annee);
    POSTCONDITION (m_identifiant == p_identifiant);

    //On déclare les invariants.

    INVARIANTS ();



    //todo Auto-generated constructor stub
  }


  /**
   * \brief retourne l'année;
   * \return un nombre qui représente l'année de l'édition du livre.
   */

  int
  Reference::reqAnnee () const
  {

    return m_annee;

  }


  /**
   * \brief assigne une nouvelle annee.
   * \param[in] p_annee la nouvelle annee
   */
  void
  Reference::asgAnnee (int p_annee)
  {

    PRECONDITION (p_annee > 0);

    m_annee = p_annee;

    POSTCONDITION (m_annee == p_annee);

    INVARIANTS ();

  }


  /**
   * \brief retourne le nom de l'auteur
   * \return une chaine de caractères qui représente le nom de l'auteur
   */

  const std::string&
  Reference::reqAuteur () const
  {


    return m_auteurs;


  }


  /**
   * \brief retourne le titre du livre
   * \return une chaine de caractére contenant le titre du livre
   */


  const std::string&
  Reference::reqTitre () const
  {



    return m_titre;



  }


  /**
   * \brief retourne l'identifiant du livre
   * \return une chaine de caractére contenant l'identifiant du livre soit le code issn ou le code isbn.
   */


  const std::string&
  Reference::reqIdentifiant () const
  {


    return m_identifiant;




  }


  /**
   * \brief retourne les informations de la reference au complet en incluant le titre, le nom de l'auteur, l'année de l'edition, l'identifiant du livre.
   * \return une chaine de caractères qui représente ces informations
   */

  std::string
  Reference::reqReferenceFormate () const
  {

    std::ostringstream ss;

    ss << Reference::m_auteurs << "." << Reference::m_titre << ".";

    return ss.str ();



  }


  /**
   * \brief un operateur qui compare la reference actuelle avec celle passée en paramétre.
   * \param[in] p_reference la reference que nous voulons comparer avec la reference actuelle.
   * \return true si les deux references ont les memes attributs et false sinon
   */

  bool Reference::operator== (const Reference& p_reference) const
  {


    if (p_reference.m_annee == m_annee && p_reference.m_titre == m_titre && p_reference.m_auteurs == m_auteurs && p_reference.m_identifiant == m_identifiant)
      {
        return true;
      }

    return false;

  }


  /**
   * \brief déstructeur virtuel de la classe Reference
   */


  Reference::~Reference () { }


  /**
   * \brief méthode qui sert à verifier si les valeurs des attributs sont valides
   */

  void
  Reference::verifieInvariant () const
  {

    INVARIANT (m_auteurs.empty () == false);
    INVARIANT (m_titre.empty () == false);
    INVARIANT (m_identifiant.empty () == false);
    INVARIANT (m_annee > 0);


  }





} /* namespace biblio */
// Fin du namespace biblio