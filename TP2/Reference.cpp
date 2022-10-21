/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Reference.cpp
 * Author: etudiant
 *
 * Created on 21 février 2022, 00:48
 */

#include "Reference.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;




/* namespace biblio */

namespace biblio
{


  /**
   *\brief constructeur de la classe Reference.
   *\param[in] p_annee l'année d'édition du livre.
   *\param[in] p_auteur le nom complet sous format valide de l'auteur valide;
   *\param[in] p_identifiant l'identifiant de la reference du code il peut être soit le code ISSN ou le code ISBN.
   *\param[in] p_titre le titre du livre.
   */

  Reference::Reference (const std::string& p_auteur, const std::string& p_titre, const std::string& p_identifiant, int p_annee) : m_annee (p_annee), m_auteurs (p_auteur), m_identifiant (p_identifiant), m_titre (p_titre) {

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
   * \param p_annee la nouvelle annee
   */
  void
  Reference::asgAnnee (int p_annee)
  {

    m_annee = p_annee;

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
   * \brief retourne l'identifiant du livre soit l'issn ou soit l'isbn13
   * \return une chaine de caractére contenant l'identifiant du livre.
   */

  const std::string&
  Reference::reqIdentifiant () const
  {
    return m_identifiant;

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
   * \brief retourne les informations de la reference au complet en incluant le titre, le nom de l'auteur, l'année de l'edition, l'identifiant du livre.
   * \return une chaine de caractères qui représente ces informations
   */

  std::string
  Reference::reqReferenceFormate () const
  {

    std::ostringstream ss;

    ss << Reference::m_auteurs << " , " << Reference::m_titre << " , " << Reference::m_annee << " , " << Reference::m_identifiant << endl;

    return ss.str ();



  }


  /**
   * \brief un operateur qui compare la reference actuelle avec celle passée en paramétre.
   * \param p_reference la reference que nous voulons comparer avec la reference actuelle.
   * \return true si les deux references ont les memes attributs et false sinon
   */

  bool Reference::operator== (const Reference& p_reference) const
  {

    if (p_reference.reqAnnee () == m_annee && p_reference.reqTitre () == m_titre && p_reference.reqAuteur () == m_auteurs && p_reference.reqIdentifiant () == m_identifiant)
      {
        return true;
      }

    return false;

  }




} /* namespace biblio */
