/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   suppressionReference.cpp
 * Author: etudiant
 *
 * Created on 18 avril 2022, 18:09
 */

#include "suppressionReference.h"
#include "validationFormat.h"
#include "CreationJournal.h"
#include "CreationOuvrage.h"
#include <QMessageBox>
#include "Reference.h"
#include "Journal.h"


using namespace util;


suppressionReference::suppressionReference ()
{
  widget.setupUi (this);

}


suppressionReference::~suppressionReference () { }


QString
suppressionReference::reqIdentifiant () const
{


  return widget.identifiantSaisi->text ();


}


void
suppressionReference::Validation ()
{


  if (widget.identifiantSaisi->text ().isEmpty ())
    {

      QString Message_error ("L'identifiant que vous avez rentré est invalide");
      QMessageBox::information (this, "Erreur", Message_error);
      return;

    }


  accept ();


}