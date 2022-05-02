/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   fenetrePrincipale.cpp
 * Author: etudiant
 *
 * Created on 16 avril 2022, 22:15
 */


#include <QtGui>
#include <QApplication>
#include "fenetrePrincipale.h"


int
main (int argc, char *argv[])
{
  // initialize resources, if needed
  // Q_INIT_RESOURCE(resfile);

  QApplication app (argc, argv);
  fenetrePrincipale Interface;
  Interface.show (); //inetrface graphique GUI qui s'affiche dés que le programme s'éxecute.

  // create and show your widgets here

  return app.exec ();



}
