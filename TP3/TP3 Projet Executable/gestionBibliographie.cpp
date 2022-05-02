/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 26 mars 2022, 05:08
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Reference.h"
#include "Bibliographie.h"
#include "ContratException.h"
#include "Journal.h"
#include "Ouvrage.h"
#include "validationFormat.h"

using namespace biblio;

using namespace std;

using namespace util;


/*
 *
 */

int
main ()
{




  cout << " Bienvenue dans l'outil de gestion de references bibliographiques. " << endl;
  cout << " ================================================================== " << endl;
  cout << "-------------------------------------------------------------------" << endl;
  cout << "Ajoutez un ouvrage : " << endl;
  cout << "-------------------------------------------------------------------" << endl;

  //passage du paramètre du nom de l'auteur.

  cout << "Entrez le nom du ou des auteurs : " << endl;

  std::string auteur;
  std::getline (std::cin, auteur);

  while (auteur == "")
    {

      cout << "Le nom des auteurs ne doit pas être vide, veuillez recommencer." << endl;
      std::getline (std::cin, auteur, '\n');

    }

  cout << "Le nom de l'auteur est " << " " << auteur << endl;

  //passage du paramètre du titre.

  cout << "Entrez le titre : " << endl;

  std::string titre;
  std::getline (std::cin, titre);

  while (titre == "")
    {

      cout << "Le titre ne doit pas être vide, veuillez recommencer." << endl;
      cin >> titre;

    }

  cout << "Le titre du livre est : " << " " << titre << endl;

  //passage du paramètre du nom de la ville d'édition.

  cout << "Entrez la ville d’édition : " << endl;

  std::string ville;
  std::getline (std::cin, ville);

  while (ville == "")
    {

      cout << "Le nom de la ville ne doit pas être vide, veuillez recommencer." << endl;
      cin >> ville;

    }

  cout << "La ville d'édition est " << " " << ville << endl;

  //passage du paramètre du nom de l'éditeur.

  cout << "Entrez l'éditeur : " << endl;

  std::string editeur;
  std::getline (std::cin, editeur);

  while (editeur == "")
    {

      cout << "Le nom de l'éditeur ne doit pas être vide, veuillez recommencer." << endl;
      cin >> editeur;

    }

  cout << "Le nom de l'éditeur est :" << " " << editeur << endl;

  //passage du paramètre de l'année de l'édition.

  cout << "Entrez l'année d'édition : " << endl;

  int annee;
  cin >> annee;

  while (annee < 0)
    {

      cout << "Le format est invalide ! Veuillez Réessayer." << endl;
      cin >> annee;

    }

  cout << "L'année d'édition du livre est : " << " " << annee << endl;

  //passage du paramètre du code isbn.

  cout << "Entrez le code ISBN : " << endl;

  std::string code_isbn;
  cin.ignore ();
  std::getline (std::cin, code_isbn);

  while (util::validerCodeIsbn (code_isbn) == false)
    {

      cout << "Le code ISBN n’est pas valide,  veuillez recommencer. " << endl;
      cin.clear ();
      std::getline (std::cin, code_isbn);


    }

  cout << "Le code ISBN est : " <<  " " << code_isbn << endl << endl;

  cout << "-------------------------------------------------------------------" << endl;

  cout << "Ajoutez une référence de type article de journal " << endl;

  cout << "-------------------------------------------------------------------" << endl;

  //passage du paramètre du nom de l'auteur.

  cout << "Entrez le nom du ou des auteurs : " << endl;

  std::string Auteur;
  std::getline (std::cin, Auteur);

  while (util::validerFormatNom (Auteur) == false)
    {

      cout << "Le nom des auteurs ne doit pas être vide, veuillez recommencer." << endl;
      cin >> Auteur;

    }

  cout << "Le nom de l'auteur de journal est : " << " " << Auteur << endl;

  //passage du paramètre du titre.

  cout << "Entrez le titre : " << endl;

  std::string Titre;
  std::getline (std::cin, Titre);

  while (Titre == "")
    {

      cout << "Le titre ne doit pas être vide, veuillez recommencer." << endl;
      cin >> Titre;

    }

  cout << "Le titre du journal est :"  << " " << Titre << endl;

  //passage du paramètre de la revue.

  cout << "Entrez le nom de la revue dans laquelle a été publiée la référence : " << endl;

  std::string revue;
  std::getline (std::cin, revue);

  while (revue == "")
    {

      cout << "Le nom de la revue ne doit pas être vide, veuillez recommencer." << endl;
      cin >> revue;

    }

  cout <<  "le nom de la revue dans laquelle a été publiée la référence :" << " " << revue << endl;


  //passage du paramètre du volume.

  cout << "Entrez le volume : " << endl;

  int volume;
  cin >> volume;

  while (volume < 0)
    {

      cout << "Le format est invalide ! Veuillez Réessayer." << endl;
      cin >> volume;

    }

  cout << "Le volume du journal est : " << " " << volume << endl;

  //passage du paramètre du numèro de la reference.

  cout << "Entrez le numéro : " << endl;

  int p_num;
  cin >> p_num;

  while (p_num < 0)
    {

      cout << "Le format est invalide ! Veuillez Réessayer." << endl;
      cin >> p_num;

    }

  cout << "Le numéro du journal est :" << " " << p_num << endl;

  //passage du paramètre de la page.

  cout << "Entrez la page où commence la référence : " << endl;

  int p_page;
  cin >> p_page;

  while (p_page < 0)
    {

      cout << "Le format est invalide ! Veuillez Réessayer." << endl;
      cin >> p_page;

    }

  cout << "Le numéro de la page est : " << " " << p_page << endl;

  //passage du paramètre de l'année.

  cout << "Entrez l'année : " << endl;

  int p_annee;
  cin >> p_annee;

  while (p_annee < 0)
    {

      cout << "Le format est invalide ! Veuillez Réessayer." << endl;
      cin >> p_annee;

    }

  cout << "L'année d'édition du journal est :" << " " << p_annee << endl;

  //passage du paramètre du code issn.

  cout << "Entrez le code ISSN : " << endl;

  std::string p_issn;
  cin.ignore ();
  std::getline (std::cin, p_issn, '\n');


  while (util::validerCodeIssn (p_issn) == false)
    {

      cout << "Le format est invalide ! Veuillez Réessayer." << endl;
      cin.clear ();
      std::getline (std::cin, p_issn, '\n');

    }

  cout << "Le code ISSN est :" << " " << p_issn << endl << endl;

  cout << "Références bibliographiques enregistrées : " << endl;

  cout << "Bibliographie " << endl;

  cout << "=========================================================" << endl;

  biblio::Ouvrage biblio1 (auteur, titre, annee, code_isbn, editeur, ville);

  biblio::Journal biblio2 (Auteur, Titre, p_annee, p_issn, revue, volume, p_num, p_page);

  cout << "[1]" << " " << biblio1.reqReferenceFormate ();

  cout << "[2]" << " "  << biblio2.reqReferenceFormate () << endl;



}
