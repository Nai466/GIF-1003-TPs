/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Ouvrage.h
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:51
 */

#ifndef OUVRAGE_H
#define OUVRAGE_H

#include <string>
#include "Reference.h"


/*namespace biblio*/

/*namespace biblio*/

namespace biblio
{

  /**
   *
   * \file Ouvrage.h
   * \class Ouvrage
   *
   * \brief cette classe  sert a manipuler des references qui sont des ouvrages.
   *
   *              cette classe contient une methode reqReferenceFormate() qui retourne une chaine de caractères
   *              qui correspond à toutes les informations d'un ouvrage
   *              <p>
   *              elle contient aussi des accesseurs de chaque attribut
   *              <p>
   *              Deux adresses peuvent etre comparées avec l'operateur == .\n
   *             Attributs:   m_editeur le nom de l'editeur de l'ouvrage
   *                          m_ville le nom de la ville d'édition
   *                          .
   *
   *
   */

  class Ouvrage : public biblio::Reference
  {
  public:

    //Constructeur de la classe Ouvrage.
    Ouvrage (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& p_editeur, const std::string& p_ville);
    //accesseurs pour chaque attribut.
    const std::string& reqEditeur () const;
    const std::string& reqVille () const;
    std::string reqReferenceFormate () const; //retourne la reference sous un nouveau format formaté.
    virtual Reference* clone () const; //méthode clone()






  private:


    std::string m_editeur; //le nom de l'éditeur.
    std::string m_ville; //le nom de la ville d'édition.
    void verifieInvariant () const; //vérifie les invariants



  };

} /*namespace biblio*/


#endif /* OUVRAGE_H */
