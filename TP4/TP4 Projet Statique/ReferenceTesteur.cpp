/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest3.cpp
 * Author: etudiant
 *
 * Created on 1 avril 2022, 00:56
 */

#include <stdlib.h>
#include <iostream>
#include <iostream>
#include <sstream>
#include <gtest/gtest.h>
#include "Reference.h"


using namespace biblio;

using namespace util;

using namespace std;

/*
 * \file ReferenceTesteur.cpp
 *
 *
 * \Brief fichier de test pour la classe Reference.
 * Les cas traités :
 *                  Il faut que les accesseurs retournent les bons paramètres.
 *                  Il faut qu'on s'assure de la validité de chacun des attributs passés en paramètres.
 *                  Il faut qu'on s'assure que la classe retourne le bon Format.
 *                  Il faut aussi s'assurer que l'opérateur de comparaison soit valide.
 *
 *
 */


//classe ReferenceDeTest derivée de la classe Reference pour permettre de tester la classe Reference

class ReferenceDeTest : public biblio::Reference
{

public:


  ReferenceDeTest (const std::string& p_auteur, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant) : Reference (p_auteur, p_titre, p_annee, p_identifiant) { }


  virtual Reference*
  clone () const
  {
    return nullptr;
  }


  virtual std::string
  reqReferenceFormate () const
  {

    std::ostringstream ss;

    ss << reqAuteur () << "." << reqTitre () << "." << endl;

    return ss.str ();


  }

} ;


/**
 * \brief test du constructeur de la classe Reference
 *  Cas valide  :  valeurs des parametres bien assignées au attributs de la classe
 */

TEST (ConstructeurReference, casValide)
{


  ReferenceDeTest a1 ("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3");
  EXPECT_EQ ("Homayoon Beigi", a1.reqAuteur ());
  EXPECT_EQ ("Fundamentals of Speaker Recognition", a1.reqTitre ());
  EXPECT_EQ (2011, a1.reqAnnee ());
  EXPECT_EQ ("ISBN 978-0-387-77591-3", a1.reqIdentifiant ());



}


/**
 * \brief test de l'accesseur reqAuteur()
 *  Cas Invalide
 */

TEST (reqAuteur, casInvalide)
{


  EXPECT_THROW (ReferenceDeTest ("", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3"), ContratException);


}


/**
 * \brief test de l'accesseur reqTitre()
 *  Cas Invalide
 */

TEST (reqTitre, casInvalide)
{


  EXPECT_THROW (ReferenceDeTest ("Homayoon Beigi", "", 2011, "ISBN 978-0-387-77591-3"), ContratException);


}


/**
 * \brief test de l'accesseur reqAnnee()
 *  Cas Invalide
 */

TEST (reqAnnee, casInvalide)
{


  EXPECT_THROW (ReferenceDeTest ("Homayoon Beigi", "Fundamentals of Speaker Recognition", -89, "ISBN 978-0-387-77591-3"), ContratException);


}


/**
 * \brief test de l'accesseur reqAnnee()
 *  Cas Invalide
 */

TEST (reqIdentifiant, casInvalide)
{


  EXPECT_THROW (ReferenceDeTest ("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2009, ""), ContratException);


}

class ReferenceValide : public::testing::Test
{

public:


  ReferenceValide () : f_referenceVal ("Homayoon Beigi", "Fundamentals of Speaker Recognition", 2011, "ISBN 978-0-387-77591-3") { }
  ReferenceDeTest f_referenceVal;


} ;


/**
 * \brief assignation d'une année valide
 *  Cas valide
 */

TEST_F (ReferenceValide, asgAnnee)
{



  f_referenceVal.asgAnnee (2011);
  EXPECT_EQ (f_referenceVal.reqAnnee (), 2011);

}


/**
 * \brief méthode clone
 *  Cas valide
 */

TEST_F (ReferenceValide, methodeClone)
{


  EXPECT_EQ (f_referenceVal.clone (), nullptr);


}

//Cas valide  : methode ReqReferenceFormate retourne le bon format


TEST_F (ReferenceValide, reqReferenceFormate)
{

  ostringstream ss;

  ss << f_referenceVal.reqAuteur () << "." << f_referenceVal.reqTitre () << "." << endl;

  EXPECT_EQ (ss.str (), f_referenceVal.reqReferenceFormate ());


}

//Cas valide  : operateur "==" valide


TEST_F (ReferenceValide, OperateurEgaleEgale)
{

  ReferenceDeTest Reference ("John Will", "World War", 1456, "ISBN 978-526-78945-9");
  EXPECT_EQ (f_referenceVal == Reference, false);
  EXPECT_EQ (f_referenceVal == f_referenceVal, true);


}






