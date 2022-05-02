/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Reference.h
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:51
 */

#ifndef REFERENCE_H
#define REFERENCE_H

#include <cstring>
#include <string>
#include "validationFormat.h"
#include "ContratException.h"


/* namespace biblio */
// Namespace du developpement Bibliographie

namespace biblio
{

  /**
   *
   * \file Reference.h
   * \class Reference
   *
   *
   * \brief Cette classe sert à la manipulation d'une reference d'un livre.
   *
   *              cette classe contient une fonction reqReferenceFormate() qui retourne une chaine de caractères
   *              qui correspond au informations complètes de cette reference.
   *              <p>
   *              Deux references peuvent etre comparées avec l'operateur == .\n
   *             Attributs:   p_annee l'année de l'édition du livre.
   *                          p_auteur le nom complet de l'auteur sous format valide.
   *                          p_identifiant l'identifiant du livre soit l'isbn ou l'issn.
   *                          p_titre le titre du livre.
   *
   *
   */


  class Reference
  {
    //déclaration des attributs publiques.
  public:


    Reference (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant);

    //Accesseurs
    int reqAnnee () const;
    const std::string& reqAuteur () const;
    const std::string& reqTitre () const;
    const std::string& reqIdentifiant () const;
    void asgAnnee (int p_annee); //Mutateur de l'attribut de l'année de reference.
    virtual std::string reqReferenceFormate () const = 0; //virtuelle pure
    bool operator== (const Reference& p_reference) const; //operateur egalegale 
    virtual ~Reference ();
    virtual Reference* clone () const = 0; //méthode clone() virtuelle pure





    //déclaration des attributs privés.
  private:

    int m_annee; // Année d'édition de la reference
    std::string m_auteurs; // Nom de l'auteur de la reference sous format valide.
    std::string m_titre; // Titre de la reference.
    std::string m_identifiant; // L'identifiant de la reference soit un code issn ou un code isbn.
    void verifieInvariant () const; // vérifie les invariants.






  };


} /* namespace biblio */

#endif /* REFERENCE_H */

