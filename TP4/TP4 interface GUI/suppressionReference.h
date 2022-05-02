/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   suppressionReference.h
 * Author: etudiant
 *
 * Created on 18 avril 2022, 18:09
 */

#ifndef _SUPPRESSIONREFERENCE_H
#define _SUPPRESSIONREFERENCE_H

#include "ui_suppressionReference.h"
#include "ui_CreationJournal.h"
#include "ui_CreationOuvrage.h"

class suppressionReference : public QDialog
{
  Q_OBJECT
public:
  suppressionReference ();
  virtual ~suppressionReference ();

  QString reqIdentifiant () const;


private slots:
  void Validation ();


private:
  Ui::suppressionReference widget;
};

#endif /* _SUPPRESSIONREFERENCE_H */
