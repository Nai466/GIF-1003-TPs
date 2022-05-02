/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CreationJournal.h
 * Author: etudiant
 *
 * Created on 18 avril 2022, 18:01
 */

#ifndef _CREATIONJOURNAL_H
#define _CREATIONJOURNAL_H

#include "ui_CreationJournal.h"

class CreationJournal : public QDialog
{
  Q_OBJECT


public:


  CreationJournal ();
  virtual ~CreationJournal ();


  QString reqNom () const;
  QString reqTitre () const;
  QString reqRevue () const;
  QString reqIdentifiant () const;
  QString reqAnnee () const;
  QString reqVolume () const;
  QString reqNumero () const;
  QString reqPage () const;



private slots:

  void Enregistrement ();



private:


  Ui::CreationJournal widget;

};

#endif /* _CREATIONJOURNAL_H */
