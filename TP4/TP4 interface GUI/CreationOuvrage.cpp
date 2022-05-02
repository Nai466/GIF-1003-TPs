/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CreationOuvrage.cpp
 * Author: etudiant
 *
 * Created on 18 avril 2022, 17:58
 */

#include "CreationOuvrage.h"
#include <QMessageBox>
#include "Ouvrage.h"

/**
 *
 * @brief interface de la fenetre d'ajout d'un ouvrage.
 * @file CreationOuvrage.cpp
 *
 * <brief>
 *         Cette classe sert à ajouter un ouvrage.
 *
 *
 *
 *
 */


using namespace util;


CreationOuvrage::CreationOuvrage ()
{
  widget.setupUi (this);
}

//accesseur du nom saisi


QString
CreationOuvrage::reqNomAuteur () const
{
  return widget.NomAuteurSaisi->text ();
}

//accesseur du nom de l'éditeur saisi


QString
CreationOuvrage::reqEditeur () const
{
  return widget.EditeurSaisi->text ();
}

//accesseur du nom de la ville saisi


QString
CreationOuvrage::reqVille () const
{
  return widget.VilleditionSaisi->text ();
}

//accesseur de l'annee saisie


QString
CreationOuvrage::reqAnnee () const
{
  return widget.AnneeSaisi->text ();
}


//accesseur de l'identifiant saisi


QString
CreationOuvrage::reqISBN () const
{
  return widget.ISBNSaisi->text ();
}

//accesseur du titre saisi


QString
CreationOuvrage::reqTitre () const
{
  return widget.TitreOuvrageSaisi->text ();
}


/**
 * @brief méthode validation qui sert à s'assurer de la validité de chaque paramètre saisi.
 */

void
CreationOuvrage::Validation ()
{

  if (widget.TitreOuvrageSaisi->text ().isEmpty ())
    {

      QString Message ("Le titre d'un ouvrage ne doit pas être vide.");
      QMessageBox::information (this, "Erreur", Message);
      return;

    }

  if (util::validerFormatNom (widget.NomAuteurSaisi->text ().toStdString ()) == false)
    {

      QString Message_2 ("Le nom de l'auteur d'un ouvrage doit sous format valide.");
      QMessageBox::information (this, "Erreur", Message_2);
      return;

    }

  if (widget.NomAuteurSaisi->text ().isEmpty ())
    {

      QString erreur ("Le nom de l'auteur d'un ouvrage ne doit pas etre vide");
      QMessageBox::information (this, "Erreur", erreur);
      return;

    }

  if (util::validerFormatNom (widget.EditeurSaisi->text ().toStdString ()) == false)
    {

      QString Message_3 ("Le nom de l'editeur d'un ouvrage doit sous format valide.");
      QMessageBox::information (this, "Erreur", Message_3);
      return;

    }

  if (widget.EditeurSaisi->text ().isEmpty ())
    {

      QString erreur_2 ("Le nom de l'editeur d'un ouvrage ne doit pas etre vide.");
      QMessageBox::information (this, "Erreur", erreur_2);
      return;

    }


  if (util::validerFormatNom (widget.VilleditionSaisi->text ().toStdString ()) == false)
    {

      QString Message_4 ("Le nom de la ville d'un ouvrage doit sous format valide.");
      QMessageBox::information (this, "Erreur", Message_4);
      return;

    }

  if (widget.VilleditionSaisi->text ().isEmpty ())
    {

      QString erreur_3 ("Le nom de la ville d'un ouvrage ne doit pas etre vide.");
      QMessageBox::information (this, "Erreur", erreur_3);
      return;

    }

  if (util::validerCodeIsbn (widget.ISBNSaisi->text ().toStdString ()) == false)
    {

      QString Message_5 ("L'identifiant (ISBN) d'un ouvrage doit sous format valide.");
      QMessageBox::information (this, "Erreur", Message_5);
      return;

    }

  if (widget.AnneeSaisi->text ().toInt () < 0)
    {


      QString Message_6 ("L'annee d'edition doit etre sous format valide.");
      QMessageBox::information (this, "Erreur", Message_6);
      return;

    }

  if (widget.AnneeSaisi->text ().isEmpty ())
    {


      QString Message_6 ("L'annee d'edition doit etre sous format valide.");
      QMessageBox::information (this, "Erreur", Message_6);
      return;

    }

  accept ();


}


CreationOuvrage::~CreationOuvrage () { }
