/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CreationJournal.cpp
 * Author: etudiant
 *
 * Created on 18 avril 2022, 18:01
 */

#include "CreationJournal.h"
#include <QMessageBox>
#include "Reference.h"
#include "Journal.h"

/**
 *
 * @brief interface de la fenetre d'ajout de journal.
 * @file CreationJournal.cpp
 *
 * <brief>
 *         Cette classe sert à ajouter un journal.
 *
 *
 *
 *
 */

using namespace util;


CreationJournal::CreationJournal ()
{
  widget.setupUi (this);
}

//accesseur du nom saisi


QString
CreationJournal::reqNom () const
{

  return widget.NomAuteurSaisi->text ();

}

//accesseur du titre saisi


QString
CreationJournal::reqTitre () const
{

  return widget.TitreJournalSaisi->text ();


}


//accesseur de la revue saisi


QString
CreationJournal::reqRevue () const
{

  return widget.RevueSaisi->text ();


}

//accesseur de l'identifiant saisi


QString
CreationJournal::reqIdentifiant () const
{

  return widget.ISSNSaisi->text ();


}


//accesseur de l'annee saisi


QString
CreationJournal::reqAnnee () const
{

  return widget.AnneeSaisie->text ();


}

//accesseur du volume saisi


QString
CreationJournal::reqVolume () const
{

  return widget.volumeSaisi->text ();

}

//accesseur du numero saisi


QString
CreationJournal::reqNumero () const
{

  return widget.numeroSaisi->text ();

}


//accesseur de la  page saisie


QString
CreationJournal::reqPage () const
{

  return widget.PageSaisie->text ();

}


CreationJournal::~CreationJournal () { }


/**
 * @brief méthode enregistrement qui sert à vérifier la validité de chaque paramétre saisi
 */

void
CreationJournal::Enregistrement ()
{



  if (util::validerFormatNom (widget.NomAuteurSaisi->text ().toStdString ()) == false)
    {
      QString Message ("Le nom de l'auteur d'un journal doit être valide");
      QMessageBox::information (this, "Erreur", Message);
      return;
    }

  if (widget.NomAuteurSaisi->text ().isEmpty ())
    {
      QString erreur ("Le nom de l'auteur d'un journal doit être valide");
      QMessageBox::information (this, "Erreur", erreur);
      return;
    }



  if (widget.RevueSaisi->text ().isEmpty ())
    {

      QString Message_2 ("Le nom de la revue d'un journal ne doit pas être vide");
      QMessageBox::information (this, "Erreur", Message_2);
      return;

    }

  if (widget.TitreJournalSaisi->text ().isEmpty ())
    {

      QString Message_3 ("Le titre d'un journal ne doit pas être vide");
      QMessageBox::information (this, "Erreur", Message_3);
      return;

    }

  if (util::validerCodeIssn (widget.ISSNSaisi->text ().toStdString ()) == false)
    {

      QString Message_4 ("L'identifiant ISSN doit être sous un format valide");
      QMessageBox::information (this, "Erreur", Message_4);
      return;

    }

  if (widget.volumeSaisi->text ().toInt () < 0)
    {

      QString Message_5 ("Le volume doit etre supérieur à 0.");
      QMessageBox::information (this, "Erreur", Message_5);
      return;

    }

  if (widget.volumeSaisi->text ().isEmpty ())
    {

      QString erreur_5 ("Le volume doit figurer.");
      QMessageBox::information (this, "Erreur", erreur_5);
      return;

    }

  if (widget.PageSaisie->text ().toInt () < 0)
    {

      QString Message_6 ("La page doit etre supérieur à 0.");
      QMessageBox::information (this, "Erreur", Message_6);
      return;

    }


  if (widget.PageSaisie->text ().isEmpty ())
    {

      QString error ("La page doit figurer.");
      QMessageBox::information (this, "Erreur", error);
      return;

    }


  if (widget.numeroSaisi->text ().toInt () < 0)
    {
      QString Message_7 ("Le numero doit etre supérieur à 0.");
      QMessageBox::information (this, "Erreur", Message_7);
      return;

    }

  if (widget.numeroSaisi->text ().isEmpty ())
    {
      QString error_bug ("Le numero doit figurer");
      QMessageBox::information (this, "Erreur", error_bug);
      return;

    }

  if (widget.AnneeSaisie->text ().toInt () < 0)
    {

      QString Message_8 ("La date d'édition du livre doit obligatoirement figurer dans la reference et elle doit être supérieure à 0.");
      QMessageBox::information (this, "Erreur", Message_8);
      return;

    }

  if (widget.AnneeSaisie->text ().isEmpty ())
    {

      QString Message_8 ("La date d'édition du livre doit obligatoirement figurer dans la reference et elle doit être supérieure à 0.");
      QMessageBox::information (this, "Erreur", Message_8);
      return;

    }

  accept ();

}
