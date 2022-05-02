/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest2.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:56
 */

#include <stdlib.h>
#include <iostream>
#include <iostream>
#include <sstream>
#include <gtest/gtest.h>
#include "Ouvrage.h"

using namespace biblio;

using namespace util;

using namespace std;

/*
 * \file OuvrageTesteur.cpp
 *
 *
 * \Brief fichier de test pour la classe Ouvrage.
 * Les cas traités :
 *                  Il faut que le constructeur soit valide.
 *                  Il faut qu'on s'assure de la validité de chacun des attributs passés en paramètres.
 *                  Il faut qu'on s'assure que la classe retourne le bon Format.
 *
 *
 *
 *
 *
 */


/**
 * \brief test du constructeur de la classe Ouvrage (des methodes sont déja vérifiées dans la classe Reference)
 *  Cas valide  :  valeurs des parametres bien assignées au attributs de la classe
 */

TEST (Ouvrage, constructeurValide)
{


  biblio::Ouvrage Ref ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-2-7605-5379-8", "Springer", "New York");
  EXPECT_EQ ("Springer", Ref.reqEditeur ());
  EXPECT_EQ ("New York", Ref.reqVille ());



}

//Cas valide  : editeur valide


TEST (reqEditeur, casValide)
{


  biblio::Ouvrage O1 ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-0-387-77591-3", "Springer", "New York");
  EXPECT_EQ ("Springer", O1.reqEditeur ());




}

//Cas valide  : ville valide


TEST (reqVille, casValide)
{

  biblio::Ouvrage O2 ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-0-387-77591-3", "Springer", "New York");
  EXPECT_EQ ("New York", O2.reqVille ());



}

//Cas valide : ISBN valide


TEST (reqIdentifiant, casValide)
{

  biblio::Ouvrage O3 ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-0-387-77591-3", "Springer", "New York");
  EXPECT_EQ ("ISBN 978-0-387-77591-3", O3.reqIdentifiant ());


}

class OuvrageValide : public::testing::Test
{

public:


  OuvrageValide () : f_ouvrageVal ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-0-387-77591-3", "Springer", "New York") { }
  biblio::Ouvrage f_ouvrageVal;

} ;

//Cas Valide : reqReferenceFormate retourne le bon format


TEST_F (OuvrageValide, reqReferenceFormate)
{

  stringstream ss;

  ss << f_ouvrageVal.reqAuteur () << "." << f_ouvrageVal.reqTitre () << "." << f_ouvrageVal.reqVille () << " : " << f_ouvrageVal.reqEditeur () << ". " << f_ouvrageVal.reqAnnee () << ". " << f_ouvrageVal.reqIdentifiant () << ". " << endl;

  EXPECT_EQ (ss.str (), f_ouvrageVal.reqReferenceFormate ());


}


//Cas valide  : methode clone valide


TEST_F (OuvrageValide, methodeClone)
{
  Reference* clone = f_ouvrageVal.clone ();
  EXPECT_EQ (f_ouvrageVal.reqReferenceFormate (), clone->reqReferenceFormate ());
}
