/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 01:44
 */

#include "Bibliographie.h"
#include "Journal.h"
#include "ContratException.h"
#include "ReferenceException.h"
#include "Ouvrage.h"
#include "Reference.h"
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

using namespace util;

using namespace biblio;



/*
 * \file BibliographieTesteur.cpp
 *
 *
 * \Brief fichier de test pour la classe Bibliographie.
 * Les cas traités :
 *                  Il faut que le constructeur soit valide.
 *                  Il faut qu'on s'assure de la validité de chacun des attributs passés en paramètres.
 *                  Il faut qu'on s'assure que la classe retourne le bon Format.
 *                  Il faut s'assurer que le constructeur copie soit valide.
 *                  IL faut que la methode ajouterReference soit valide.
 *                  Il faut aussi s'assurer que l'opérateur d'asignation soit valide.
 *
 *
 *
 */


/**
 * \brief test du constructeur de la classe Bibliographie
 *  Cas valide  :  valeurs des parametres bien assignées au attributs de la classe
 */

TEST (Bibliographie, constructeurValide)
{

  biblio::Bibliographie B1 ("Nom de la bibliographie");
  EXPECT_EQ ("Nom de la bibliographie", B1.reqNomBibliographie ());

}

//Cas valide  : nom de la Bibliographie valide


TEST (reqNomBibliographie, casValide)
{

  biblio::Bibliographie Biblio ("Base de données");
  EXPECT_EQ ("Base de données", Biblio.reqNomBibliographie ());


}

//Cas invalide  : nom de la Bibliographie invalide


TEST (reqNomBibliographie, casInvalide)
{

  EXPECT_THROW (biblio::Bibliographie Bo (""), ContratException);

}

class BibliographieValide : public::testing::Test
{

public:


  BibliographieValide () : f_BibliographieVal ("nom de la bibliographie") { }


  biblio::Bibliographie f_BibliographieVal;

} ;



//Cas valide  : constructeurCopie valide


TEST_F (BibliographieValide, constructeurCopie)
{


  biblio::Bibliographie dir (f_BibliographieVal);
  EXPECT_EQ (f_BibliographieVal.reqBibliographieFormate (), dir.reqBibliographieFormate ());


}

//Cas valide  : operateur d'assignation valide


TEST_F (BibliographieValide, operateurEgale)
{

  biblio::Bibliographie dir1 ("Nom Valide");
  dir1 = f_BibliographieVal;
  EXPECT_EQ (dir1.reqBibliographieFormate (), f_BibliographieVal.reqBibliographieFormate ());

}


//Cas valide  : methode reqBibliographieFormate retourne le bon format


TEST_F (BibliographieValide, reqBibliographieFormate)
{

  std::ostringstream ss;

  ss << "Bibliographie" << endl;

  ss << "===============================" << endl;

  EXPECT_EQ (ss.str (), f_BibliographieVal.reqBibliographieFormate ());


}



//Cas valide  : methode ajouterReference ajoute correctement un nouveau ouvrage ou journal dans la Bibliographie


TEST_F (BibliographieValide, ajouterReference)
{

  biblio::Bibliographie B1 ("Success");

  biblio::Ouvrage Reference ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-2-7605-5379-8", "Springer", "New York");

  B1.ajouterReference (Reference);

  biblio::Bibliographie B2 ("Bibliographie ALOA");

  biblio::Journal Journale ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);

  B2.ajouterReference (Journale);

  std::string avant_inscription = f_BibliographieVal.reqBibliographieFormate ();

  f_BibliographieVal.ajouterReference (Journale);

  std::string apres_inscription = f_BibliographieVal.reqBibliographieFormate ();

  EXPECT_NE (avant_inscription, apres_inscription);

  std::string avant_ajout = f_BibliographieVal.reqBibliographieFormate ();

  f_BibliographieVal.ajouterReference (Reference);

  std::string apres_ajout = f_BibliographieVal.reqBibliographieFormate ();

  EXPECT_NE (avant_ajout, apres_ajout);



}

//Cas invalide  : methode ajouterReference ajoute une reference deja existante.


TEST_F (BibliographieValide, ajouterReferenceInvalide)
{

  biblio::Bibliographie B1 ("Success");

  biblio::Ouvrage Reference ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-2-7605-5379-8", "Springer", "New York");

  B1.ajouterReference (Reference);

  EXPECT_THROW (B1.ajouterReference (Reference), ReferenceDejaPresenteException);

  biblio::Bibliographie B2 ("Bibliographie ALOA");

  biblio::Journal Journale ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);

  B2.ajouterReference (Journale);

  EXPECT_THROW (B2.ajouterReference (Journale), ReferenceDejaPresenteException);

}


//Cas valide  : methode supprimerReference retire correctement un ouvrage ou un journal de la bibliographie
//              implicitement veut dire que la methode privée ReferenceEstDejaPresente est valide.


TEST_F (BibliographieValide, supprimerReference)
{

  biblio::Ouvrage Reference ("Homayoon Beigi", "Fundamentals of Speaker Recogntion", 2011, "ISBN 978-2-7605-5379-8", "Springer", "New York");

  std::string avant_suppression = f_BibliographieVal.reqBibliographieFormate ();

  f_BibliographieVal.ajouterReference (Reference);
  f_BibliographieVal.supprimerReference ("ISBN 978-2-7605-5379-8");

  std::string apres_suppression = f_BibliographieVal.reqBibliographieFormate ();

  EXPECT_EQ (avant_suppression, apres_suppression);

  biblio::Journal Journale ("A survey of source code management tools for programming courses ", "Journal of computing sciences in colleges ", 2011, "ISSN 1937-4771", "Hart", 12, 45, 59);

  std::string avant_suppression_2 = f_BibliographieVal.reqBibliographieFormate ();

  f_BibliographieVal.ajouterReference (Journale);
  f_BibliographieVal.supprimerReference ("ISSN 1937-4771");

  std::string apres_suppression_2 = f_BibliographieVal.reqBibliographieFormate ();

  EXPECT_EQ (avant_suppression_2, apres_suppression_2);


}

//Cas Invalide  : methode supprimerReference retire  un ouvrage ou journal inexistant dans la Bibliographie.
//                implicitement veut dire que la methode privée ReferenceEstDejaPresente est valide.


TEST_F (BibliographieValide, supprimerReferenceInvalide)
{



  ASSERT_THROW (f_BibliographieVal.supprimerReference ("ISBN 978-78--894585-8956"), ReferenceAbsenteException);

  ASSERT_THROW (f_BibliographieVal.supprimerReference ("ISSN 1895-7894"), ReferenceAbsenteException);


}

