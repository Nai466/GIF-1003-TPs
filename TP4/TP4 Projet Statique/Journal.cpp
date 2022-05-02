/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Journal.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:51
 */

#include "Journal.h"
#include <iostream>
#include "validationFormat.h"
#include <sstream>
#include <string>

using namespace std;

using namespace util;

/*namespace biblio*/

namespace biblio
{


  /**
   * \brief constructeur de la classe Journal.
   *
   *
   * \param[in] p_auteur l'auteur du journal
   * \param[in] p_titre le titre du journal
   * \param[in] p_annee l'annnee d'edition
   * \param[in] p_identifiant l'identifiant du journal (dans ce cas-là c'est le code issn).
   * \param[in] p_volume le numéro du volume du journal
   * \param[in] p_numero le numero du journal
   * \param[in] p_page le nombre de la page du journal
   *
   *
   * \pre le nom du journal ne doit pas être vide.
   * \pre le volume doit être supérieur strict à 0.
   * \pre le numero du journal doit etre supérieur strict à 0.
   * \pre la page du journal doit etre supérieur strict à 0.
   * \pre le code issn doit etre valide
   *
   *
   *
   * \post m_nom prend la valeur de p_nom
   * \post m_volume prend la valeur de p_volume
   * \post m_numero prend la valeur de p_numero
   * \post m_page prend la valeur de p_page
   * \post m_identifiant prend la valeur de p_identifiant
   *
   *
   */

  Journal::Journal (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& p_nom, int p_volume, int p_numero, int p_page) : Reference (p_auteur, p_titre, p_annee, p_identifiant), m_nom (p_nom), m_volume (p_volume), m_numero (p_numero), m_page (p_page)
  {

    PRECONDITION (p_nom.empty () == false);
    PRECONDITION (p_volume > 0);
    PRECONDITION (p_numero > 0);
    PRECONDITION (p_page > 0);
    PRECONDITION (util::validerCodeIssn (p_identifiant));



    POSTCONDITION (m_nom == p_nom);
    POSTCONDITION (m_volume == p_volume);
    POSTCONDITION (m_numero == p_numero);
    POSTCONDITION (m_page == p_page);




    INVARIANTS ();



  }


  /**
   * \brief accesseur de l'atribut m_nom.
   * \return un string qui represente la valeur de cet attribut.
   */


  const std::string&
  Journal::reqNom () const
  {

    return m_nom;

  }


  /**
   * \brief accesseur de l'atribut m_volume.
   * \return un int qui represente la valeur de cet attribut.
   */


  int
  Journal::reqVolume () const
  {

    return m_volume;

  }


  /**
   * \brief accesseur de l'atribut m_numero.
   * \return un int qui represente la valeur de cet attribut.
   */


  int
  Journal::reqNumero () const
  {

    return m_numero;

  }


  /**
   * \brief accesseur de l'atribut m_page.
   * \return un int qui represente la valeur de cet attribut.
   */


  int
  Journal::reqPage () const
  {

    return m_page;

  }


  /**
   * \brief une méthode qui crée un string qui contient tout les informations d'un journal d'une manière organisée.
   * \return ce string créé.
   */


  std::string
  Journal::reqReferenceFormate () const
  {

    std::ostringstream ss;

    ss << Reference::reqReferenceFormate () << Journal::m_nom  << ", " << "vol. " << Journal::m_volume << "," << "no. " << Journal::m_numero << ", " << "pp. " << Journal::m_page << "." << Reference::reqAnnee () << ". " << Reference::reqIdentifiant () << "." << endl;

    return ss.str ();


  }


  /**
   * \brief méthode qui crée un nouveau journal créé à partir d'un journal existant.
   * \return le journal créé.
   */


  Reference*
  Journal::clone () const
  {

    return new Journal (*this); // Appel du constructeur copie


  }


  /**
   * \brief méthode qui sert à verifier si les valeurs des attributs sont valides
   */


  void
  Journal::verifieInvariant () const
  {

    INVARIANT (m_nom.empty () == false);
    INVARIANT (m_volume > 0);
    INVARIANT (m_numero > 0);
    INVARIANT (m_page > 0);
    INVARIANT (util::validerCodeIssn (reqIdentifiant ()));


  }


} /*namespace biblio*/

