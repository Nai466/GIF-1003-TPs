/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 21 février 2022, 00:45
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Reference.h"
#include "validationFormat.h"

using namespace std;

using namespace util;


/*
 *
 */
int
main ()
{

  /*
   * Message de bienvenu dans le fichier gestionReference.cpp
   * Affichage des messages en sortie dans la console.
   * Outil de manipulation des références.
   *
   * Il comporte  les validations des paramètres de la référence telles que la validation du nom de l'auteur.
   * Validation du titre du livre.
   * Validation de l'année d'édition.
   * Validation de l'identifiant du livre soit le code ISSN soit le code ISBN.
   * Retour de la valeur de toute la reference dans la console.
   *
   */

  cout << "Bienvenu à l'outil d'ajout d'une réference." << endl; //message de bienvenue
  cout << "--------------------------------------------" << endl << endl;
  //validation du nom de l'auteur du livre.

  cout << "Entrez l'auteur du livre : " << endl;
  std::string auteur;
  std::getline (std::cin, auteur);
  while (util::validerFormatNom (auteur) == false)
    {

      cout << " Nom d'auteur invalide !" << endl;
      cout << " Veuillez réessayer : " << endl;
      std::getline (std::cin, auteur);


    }

  cout << "Le nom de l'auteur du livre est : " << auteur << endl << endl;

  cout << "------------------------------------------" << endl << endl;

  //validation du titre du livre.

  std::string titre;
  cout << " Entrez le titre du livre : " ;
  std::getline (std::cin, titre);
  while (titre == "")
    {

      cout <<  " Le titre est vide ! " << endl;
      cout <<  " Veuillez réessayer  : " ;
      std::getline (std::cin, titre);
    }

  cout << "Le titre du livre est : " << titre << endl;

  cout << "-------------------------------------------" << endl << endl;

  //validation de l'annee de l'edition du livre.


  int int_Annee;

  cout << "Veuillez entrer une année d'édition du livre :" << endl;
  cin >> int_Annee; //on demande à l'utilisateur de rentrer l'année d'édition du livre.
  //tant que l'année est incorrecte on demandera toujours à l'utilisateur de rentrer une valeur valide d'annnée d'édition.
  while (int_Annee < 0)
    {

      cout << "La date d'édition du livre n'est pas valide !" << endl;

      cout << "Veuillez réessayer : " << endl;
      cin >> int_Annee;

      if (int_Annee > 0)
        {

          cout << "La date de l'édition du livre est : " << int_Annee << endl;

        }


    }

  cout << "La date de l'édition du livre est : " << int_Annee << endl;


  cout << "-------------------------------------------" << endl << endl;

  // validation de l'identifiant du livre.

  std::string identifiant;


  cout << "Veuillez entrez un identifiant : ";
  cin.ignore ();
  std::getline (std::cin, identifiant, '\n');


  if (util::validerCodeIsbn (identifiant) == true || util::validerCodeIssn (identifiant) == true)
    {

      cout << "L'identifiant du livre est : " << identifiant << endl << endl;


    }




  cout << "Informations enregistrées. " << endl;

  // Retourner toute la reference du livre.

  cout << "------------------------------------------" << endl << endl;
  
  Reference Ref1(auteur, titre, int_Annee, identifiant);

  cout << Ref1.reqReferenceFormate() << endl;

  cout << "Fin du programme." << endl;

}

