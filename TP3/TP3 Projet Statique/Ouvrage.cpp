/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Ouvrage.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:51
 */


#include "Ouvrage.h"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

using namespace util;

/*namespace biblio*/

namespace biblio
{


  /**
   * \brief constructeur de la classe Ouvrage.
   *
   *
   * \param[in] p_auteur le nom de l'auteur de l'ouvrage
   * \param[in] p_titre le titre de l'ouvrage
   * \param[in] p_annee l'annee d'édition de l'ouvrage.
   * \param[in] p_identifiant l'identifiant de l'ouvrage soit ici le code isbn.
   * \param[in] p_editeur le nom de l'editeur
   * \param[in] p_ville le nom de la ville d'édition
   * \param[in] p_identifiant l'identifiant de l'ouvrage ici le code ISBN.
   *
   * \pre le nom de l'editeur doit respecter le format de nom imposé.
   * \pre le nom de la ville d'édition doit respecter le format de nom imposé
   * \pre l'identifiant ici est un code isbn donc faut vérifier qu'il est bien valide.
   *
   *
   *
   * \post m_ville prend la valeur de p_ville.
   * \post m_editeur prend la valeur de p_editeur.
   *
   *
   *
   *
   */


  Ouvrage::Ouvrage (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& p_editeur, const std::string& p_ville) : Reference (p_auteur, p_titre, p_annee, p_identifiant), m_editeur (p_editeur), m_ville (p_ville)
  {
    PRECONDITION (util::validerFormatNom (p_editeur));
    PRECONDITION (util::validerFormatNom (p_ville));
    PRECONDITION (util::validerCodeIsbn (p_identifiant));


    POSTCONDITION (m_ville == p_ville);
    POSTCONDITION (m_editeur == p_editeur);



    INVARIANTS ();


  }


  /**
   * \brief accesseur de l'atribut m_editeur.
   * \return un string qui represente la valeur de cet attribut.
   */

  const std::string&
  Ouvrage::reqEditeur () const
  {


    return m_editeur;


  }


  /**
   * \brief accesseur de l'atribut m_ville.
   * \return un string qui represente la valeur de cet attribut.
   */


  const std::string&
  Ouvrage::reqVille () const
  {

    return m_ville;


  }


  /**
   * \brief une méthode qui crée un string qui contient tout les informations de l'ouvrage concerné d'une manière organisée.
   * \return ce string créé.
   */

  std::string
  Ouvrage::reqReferenceFormate () const
  {


    std::ostringstream ss;


    ss << Reference::reqReferenceFormate () << Ouvrage::m_ville << " : " << Ouvrage::m_editeur << ". " << Reference::reqAnnee () << ". " << Reference::reqIdentifiant () << ". " << endl;

    return ss.str ();



  }


  /**
   * \brief méthode qui crée un nouvel ouvrage créé à partir d'un ouvrage existant.
   * \return l'ouvrage créé.
   */

  Reference*
  Ouvrage::clone () const
  {


    return new Ouvrage  (*this); //Appel du constructeur copie.


  }


  /**
   * \brief méthode qui sert à verifier si les valeurs des attributs sont valides
   */


  void
  Ouvrage::verifieInvariant () const
  {

    //On vérifie que tout est valide.


    INVARIANT (util::validerFormatNom (m_ville));
    INVARIANT (util::validerFormatNom (m_editeur));
    INVARIANT (util::validerCodeIsbn (reqIdentifiant ()));




  }


} /*namespace biblio*/



