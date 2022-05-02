/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Bibliographie.h
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:53
 */

#ifndef BIBLIOGRAPHIE_H
#define BIBLIOGRAPHIE_H

#include "Reference.h"
#include "Journal.h"
#include "Ouvrage.h"
#include <string>
#include <cstring>
#include <vector>



/*namespace biblio*/

namespace biblio
{

  /**
   *
   * \file Bibliographie.h
   * \class Bibliographie
   *
   *
   * \brief Cette classe sert à la manipulation des references.
   *
   *              cette classe contient une methode reqNomBibliographie() qui retourne une chaine de caractères
   *              qui correspond au informations de la bibliographie et les informations de la reference qui y font partie.
   *              <p>
   *              Deux bibliographies peuvent etre comparées avec l'operateur == .\n
   *             Attributs:   m_nomBibliographie le nom de la bibliographie.
   *                          m_Identifiant l'identifiant de la reference.
   *                          m_vReferences un vecteur qui contient des pointeurs qui pointent sur des bibliographies qui sont des
   *                                     journaux ou des ouvrages.
   *
   */

  class Bibliographie
  {
  public:


    Bibliographie (const std::string& p_nomBibliographie); //constructeur de la classe Bibliographie.
    ~Bibliographie (); //destructeur de la classe Bibliographie.
    //Accesseur pour lire le nom d'une bibliographie
    const std::string& reqNomBibliographie () const;
    //Méthode pour ajouter une reference dans la bibliographie.
    void ajouterReference (const Reference& p_nouvelleReference);
    //Constructeur Copie Bibliographie
    Bibliographie (const biblio::Bibliographie& p_Bibliographie);
    //méthode reqBibliographieFormate qui affiche les references d'un ouvrage et d'un journal.
    std::string reqBibliographieFormate () const;
    const Bibliographie& operator= (const Bibliographie& p_Bibliographie); //opérateur d'assignation.






  private:

    bool referenceEstDejaPresente (const std::string& p_identifiant) const;
    //méthode qui permet de vérifier si la classe bibliographie contient une reference ou non.
    std::vector<Reference*> m_vReferences; //vecteur qui permet de pointer sur les references.
    std::string m_nomBibliographie; //nom de la bibliographie
    //méthode pour vérifier les invariants
    void verifieInvariant () const;


  };



} /*namespace biblio*/

#endif /* BIBLIOGRAPHIE_H */
