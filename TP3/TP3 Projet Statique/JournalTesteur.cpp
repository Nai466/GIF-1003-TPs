/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:55
 */

#include <stdlib.h>
#include <iostream>
#include <iostream>
#include <sstream>
#include <gtest/gtest.h>
#include "Journal.h"

using namespace biblio;

using namespace util;

using namespace std;

/*
 * \file JournalTesteur.cpp
 *
 *
 * \Brief fichier de test pour la classe Journal.
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
 * \brief test du constructeur de la classe Journal (des methodes sont déja vérifiées dans la classe Reference)
 *  Cas valide  :  valeurs des parametres bien assignées au attributs de la classe
 */

TEST (Journal, constructeurValide)
{


  biblio::Journal Ref ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);
  EXPECT_EQ ("Hart", Ref.reqNom ());
  EXPECT_EQ (12, Ref.reqVolume ());
  EXPECT_EQ (45, Ref.reqNumero ());
  EXPECT_EQ (59, Ref.reqPage ());
  EXPECT_EQ ("ISSN 1937-4771", Ref.reqIdentifiant ());



}

//Cas valide  : nom valide


TEST (reqNom, casValide)
{

  biblio::Journal J1 ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);
  EXPECT_EQ ("Hart", J1.reqNom ());


}

//Cas valide  : volume valide


TEST (reqVolume, casValide)
{

  biblio::Journal J2 ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);
  EXPECT_EQ (12, J2.reqVolume ());



}

//Cas valide : ISSN valide


TEST (reqIdentifiant, casValide)
{

  biblio::Journal O2 ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);
  EXPECT_EQ ("ISSN 1937-4771", O2.reqIdentifiant ());


}

//Cas valide : numero valide


TEST (reqNumero, casValide)
{

  biblio::Journal J3 ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);
  EXPECT_EQ (45, J3.reqNumero ());



}


//Cas valide : page valide


TEST (reqPage, casValide)
{

  biblio::Journal Ref ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);
  EXPECT_EQ (59, Ref.reqPage ());



}

class JournalValide : public::testing::Test
{

public:


  JournalValide () : f_JournalVal ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59) { }
  biblio::Journal f_JournalVal;

} ;

//Cas Valide : reqReferenceFormate retourne le bon format


TEST_F (JournalValide, reqReferenceFormate)
{

  stringstream ss;

  ss << f_JournalVal.reqAuteur () << "." << f_JournalVal.reqTitre () <<  "." << " " << f_JournalVal.reqNom () <<  ", " << "vol. " << f_JournalVal.reqVolume () << "," << "no. " << f_JournalVal.reqNumero () << ", " << "pp. " << f_JournalVal.reqPage () << "." << f_JournalVal.reqAnnee () << ". " << f_JournalVal.reqIdentifiant () << "." << endl;

  EXPECT_EQ (ss.str (), f_JournalVal.reqReferenceFormate ());


}

//Cas valide  : methode clone valide


TEST_F (JournalValide, methodeClone)
{
  Reference* clone = f_JournalVal.clone ();
  EXPECT_EQ (f_JournalVal.reqReferenceFormate (), clone->reqReferenceFormate ());
}