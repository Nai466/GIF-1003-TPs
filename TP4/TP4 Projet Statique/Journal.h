/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Journal.h
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:51
 */

#ifndef JOURNAL_H
#define JOURNAL_H


#include <string>
#include "Reference.h"


/*namespace biblio*/

namespace biblio
{

  /**
   *
   * \file Journal.h
   * \class Journal
   *
   *
   * \brief cette classe hérite de la classe reference.
   * \brief cette classe  sert a manipuler des references qui sont des journaux.
   *
   *              cette classe contient une methode reqReferenceFormate() qui retourne une chaine de caractères
   *              qui correspond à toutes les informations du journal
   *              <p>
   *              elle contient aussi des accesseurs pour chaque attribut d'un journal
   *              <p>
   *              Deux adresses peuvent etre comparées avec l'operateur == .\n
   *             Attributs:   m_nom le nom du journal
   *                          m_volume le volume d'un journal
   *                          m_numero le numero d'un journal
   *                          m_page le nombre de la page d'un journal
   *                          m_ISSN l'identifiant d'un journal soit ici le code ISSN
   *
   *
   *
   */

  class Journal : public biblio::Reference
  {
  public:

    //constructeur de la classe Ouvrage
    Journal (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& p_nom, int p_volume, int p_numero, int p_page);
    //Accesseurs
    const std::string& reqNom () const;
    int reqVolume () const;
    int reqNumero () const;
    int reqPage () const;
    std::string reqReferenceFormate () const; //méthode reqReferenceFormate augmentée
    virtual Reference* clone () const; //méthode clone()



  private:

    std::string m_nom; //nom du journal
    int m_volume; // un nombre entier qui représente le volume du journal.
    int m_page; // un nombre entier qui représente le numéro de la page du journal.
    int m_numero; // un nombre entier qui représente le numéro du journal.
    void verifieInvariant () const;



  };


} /*namespace biblio*/

#endif /* JOURNAL_H */

