/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   fenetrePrincipale.h
 * Author: etudiant
 *
 * Created on 18 avril 2022, 14:30
 */

#ifndef _FENETREPRINCIPALE_H
#define _FENETREPRINCIPALE_H



#include "ui_fenetrePrincipale.h"
#include "ui_CreationOuvrage.h"
#include "ui_CreationJournal.h"
#include "ui_suppressionReference.h"
#include "Reference.h"
#include "Bibliographie.h"
#include "Journal.h"
#include "Ouvrage.h"

class fenetrePrincipale : public QMainWindow
{
  Q_OBJECT


public:


  fenetrePrincipale (QWidget *parent = 0);
  ~fenetrePrincipale ();
  void supprimerReference (std::string p_identifiant);





private slots:


  void ajouterJournal ();
  void ajouterOuvrage ();
  void supprimerReferenceBibliographiques ();




private:



  Ui::fenetrePrincipale ui;
  biblio::Bibliographie Biblio;
  bool referencePresente = false;


};

#endif /* _FENETREPRINCIPALE_H */
