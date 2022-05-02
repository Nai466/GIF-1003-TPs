/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CreationOuvrage.h
 * Author: etudiant
 *
 * Created on 18 avril 2022, 17:58
 */

#ifndef _CREATIONOUVRAGE_H
#define _CREATIONOUVRAGE_H

#include "ui_CreationOuvrage.h"

class CreationOuvrage : public QDialog
{
  Q_OBJECT

public:

  CreationOuvrage ();
  virtual ~CreationOuvrage ();

  QString reqNomAuteur () const;
  QString reqEditeur () const;
  QString reqVille () const;
  QString reqAnnee () const;
  QString reqISBN () const;
  QString reqTitre () const;


private slots:

  void Validation ();


private:

  Ui::CreationOuvrage widget;
};

#endif /* _CREATIONOUVRAGE_H */
