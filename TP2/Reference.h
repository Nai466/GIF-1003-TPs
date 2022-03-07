/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Reference.h
 * Author: etudiant
 *
 * Created on 21 février 2022, 00:48
 */

#ifndef REFERENCE_H
#define REFERENCE_H

#include <string>
#include "validationFormat.h"


/* namespace biblio */

namespace biblio
{

  /**
   * \class Reference
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


    Reference (const std::string& p_auteur, const std::string& p_titre, const std::string& p_identifiant, const int& p_annee);
    int reqAnnee () const;
    void asgAnnee (const int& p_annee);
    const std::string& reqAuteur () const;
    const std::string& reqIdentifiant () const;
    const std::string& reqTitre () const;
    std::string reqReferenceFormate ();
    bool operator== (const Reference& p_reference) const;


    //déclaration des attributs privés.
  private:

    int m_annee;
    std::string m_auteurs;
    std::string m_titre;
    std::string m_identifiant;




  };


} /* namespace biblio */

#endif /* REFERENCE_H */

