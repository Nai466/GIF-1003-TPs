/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   fenetrePrincipale.cpp
 * Author: etudiant
 *
 * Created on 18 avril 2022, 14:30
 */

#include "fenetrePrincipale.h"
#include "CreationOuvrage.h"
#include "CreationJournal.h"
#include "Bibliographie.h"
#include <QMessageBox>
#include "ContratException.h"
#include "ReferenceException.h"
#include "suppressionReference.h"

using namespace biblio;


/**
 *
 * @brief interface de la fenetre principale
 * @file fenetrePrincipale.cpp
 *
 * <brief>
 *         Cette classe sert à afficher une interface graphique GUI qui permet la gestion des references Bibliographiques;
 *
 *         <p> elle demande l'ajout d'un ouvrage ou l'ajout d'un journal.
 *             elle affiche ces derniers sous un format valide.
 *             On peut aussi supprimer une reference en manipulant son identifiant.
 *
 *
 *
 */


/**
 *
 * @brief constructeur de la classe fenetrePrincipale.
 */

fenetrePrincipale::fenetrePrincipale (QWidget *parent) : QMainWindow (parent), Biblio ("Bibliographie")
{
  ui.setupUi (this);
}


/**
 * @brief une méthode ajouterOuvrage qui s'occupe de l'ajout d'un ouvrage et qui offre cette derniere dans le menu des operations de l'interface.
 *        <p> elle permet aussi d'afficher la référence saisie (ouvrage saisi).
 */

void
fenetrePrincipale::ajouterOuvrage ()
{


  CreationOuvrage UnNouveauOuvrage;
  if (UnNouveauOuvrage.exec ())
    {

      biblio::Ouvrage ReferenceOuvrage (UnNouveauOuvrage.reqNomAuteur ().toStdString (), UnNouveauOuvrage.reqTitre ().toStdString (), UnNouveauOuvrage.reqAnnee ().toInt (), UnNouveauOuvrage.reqISBN ().toStdString (), UnNouveauOuvrage.reqEditeur ().toStdString (), UnNouveauOuvrage.reqVille ().toStdString ());


      try
        {

          Biblio.ajouterReference (ReferenceOuvrage);

        }

      catch (ReferenceDejaPresenteException& e)
        {

          QString message = (e.what ());
          QMessageBox::information (this, "Erreur Référence déjà présente", message);
        }

      ui.affichage->setText (Biblio.reqBibliographieFormate ().c_str ());



    }


}


/**
 * @brief une méthode ajouterJournal qui permet l'ajout d'un journal.
 *        <p> elle permet aussi d'afficher la référence du journal dans l'interface graphique principal.
 */

void
fenetrePrincipale::ajouterJournal ()
{



  CreationJournal UnNouveauJournal;
  if (UnNouveauJournal.exec ())
    {

      biblio::Journal ReferenceJournal (UnNouveauJournal.reqNom ().toStdString (), UnNouveauJournal.reqTitre ().toStdString (), UnNouveauJournal.reqAnnee ().toInt (), UnNouveauJournal.reqIdentifiant ().toStdString (), UnNouveauJournal.reqRevue ().toStdString (), UnNouveauJournal.reqVolume ().toInt (), UnNouveauJournal.reqNumero ().toInt (), UnNouveauJournal.reqPage ().toInt ());

      try
        {

          Biblio.ajouterReference (ReferenceJournal);

        }

      catch (ReferenceDejaPresenteException& e)
        {

          QString message = (e.what ());
          QMessageBox::information (this, "Erreur Référence déjà présente", message);
        }

      ui.affichage->setText (Biblio.reqBibliographieFormate ().c_str ());


    }


}


/**
 * @brief une méthode qui permet d'afficher une fenetre qui nous permettra de supprimer la reference qu'on veut en saisissant son identifiant.
 */

void
fenetrePrincipale::supprimerReferenceBibliographiques ()
{

  suppressionReference sup;

  if (sup.exec ())
    {
      try
        {

          Biblio.supprimerReference (sup.reqIdentifiant ().toStdString ());

        }

      catch (ReferenceAbsenteException& e)
        {

          QString message_error = (e.what ());
          QMessageBox::information (this, "Erreur Reference Absente", message_error);

        }


      ui.affichage->setText (Biblio.reqBibliographieFormate ().c_str ());

    }



}


/**
 * @brief destructeur de la classe fenetrePrincipale
 */

fenetrePrincipale::~fenetrePrincipale ()
{


  Biblio.~Bibliographie ();


}
