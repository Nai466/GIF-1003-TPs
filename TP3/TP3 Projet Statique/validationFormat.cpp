/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include "validationFormat.h"
#include <string>
#include <math.h>
#include <cstring>
#include <fstream>
#include <iostream>


using namespace std;

/* namespace util */

namespace util
{


  bool
  validerFormatNom (const std::string& p_nom)
  {
    //Déclaration de la fonction validerFormatNom
    //Début du bloc d'énoncé.
    //Précision du type de la fonction ici en l'occurence de type booléen.

    bool reponse = false;
    //déclaration des variables assignées.
    //Initialistaion de la boucle d'investiguation du format du nom.
    for (unsigned int i = 0; i < p_nom.length (); i++)
      {
        //Première condition posée à satisfaire.
        if (p_nom[i] != ' ' and p_nom[i] != '-')
          //Sinon continuer vers la prochaine condition posée à satisfaire.
          {
            if (!isalpha (p_nom[i]))
              // condition posée à satisfaire.
              return reponse;
            //retourner la réponse du programme sur la console.

          }
        if (p_nom [i] == ' ' or p_nom [i] == '-')
          //Concernant les espaces si l'utitlisateur entre un caractère tel que ' ' ou '-'
          {

            //initialisation de la condition d'investiguation
            if (i < (p_nom.length () - 1))
              //Vérifier que la longueur du nom est correct et appropriée
              //si oui passer à la prochaine condition.

              {
                if (p_nom [i + 1] == ' ' or (p_nom [i + 1] == '-'))
                  //si cette condition est satisfaite
                  {
                    return reponse;
                    //retourner la valeur de la réponse sur la console.
                  }
              }
          }

      }

    return true;
    return "Format_Nom valide.";
    //Retourner la valeur vraie.
    //le format est bel et bien respecté.

  }

  //fin de la fonction bool validerFormatNom
  //Début de la fonction bool validerCodeIssn
  //Initialisation de la fonction.
  //Déclaration de la fonction et de ses arguments.


  bool
  validerCodeIssn (const std::string& p_issn)
  {
    //assignation de la fonction à son type ici en l'occurence de type booléen.
    //déclaration des variables
    bool reponse = false;
    bool formatNonValide = true;
    const int modulo = 11;
    int addition = 0;
    //Initialisation de la condition.
    //Si la longueur du code issn est de 14 alors faire marcher la boucle d'investiguation du fomat du code issn qui suit.

    if (p_issn.length () == 14)
      {
        //Les conditions que le code issn doit satisfaire.

        formatNonValide = (p_issn[0] != 'I' || p_issn[1] != 'S' || p_issn[2] != 'S' || p_issn[3] != 'N' || p_issn[4] != ' ' || p_issn[9] != '-' );

        if (!formatNonValide)
          {
            //début de la boucle.
            //Il faut qu'il respecte aussi les conditions énumérées dans la boucle d'investiguation.
            int j = 0;
            for (unsigned int i = 5; i < 13 ; i++)
              {
                if (i != 9)
                  {
                    addition += int(p_issn[i] - '0')* (8 - j);
                    j++;
                  }
              }
            int cle = modulo - (addition % modulo);
            //la clé est la différence entre le reste trouvé de la division euclidienne de l'addition par 11 ici assignée à modulo et le modulo ici la valeur 11.
            char dernierCaractere = p_issn[p_issn.length () - 1] ;
            if (dernierCaractere == 'X')
              {
                reponse =  cle == 10;
              }
            else
              {
                reponse =  cle == int (dernierCaractere - '0');
              }
          }
      }
    //Si tout est bon, on passe au calcul de la clé du code issn qui constitue le dernier caractère du code.
    return reponse;

    cout << p_issn;

  }


  bool
  validerCodeIsbn (const std::string& p_isbn)
  {

    //validation du code ISBN.

    int count = 0;
    int sum = 0;


    if (p_isbn[0] != 'I' || p_isbn[1] != 'S' || p_isbn[2] != 'B' || p_isbn[3] != 'N' || p_isbn[5] != '9' || p_isbn[6] != '7' || p_isbn[7] != '8')return false;

    if (p_isbn[8] != '-' || p_isbn[10] != '-' || p_isbn[20] != '-') return false;

    if (p_isbn[14] != '-' &&  p_isbn[15] != '-') return false;


    for (int i = 5; i < p_isbn.length () - 1; i++)
      {

        if (p_isbn[i] == ' ' || p_isbn[i] == '-')
          {
            continue;
          }

        if (p_isbn[i] < '0' || p_isbn[i] > '9')
          {
            return false;
          }
        if (count & 1)
          {
            sum += 3 * (p_isbn[i] - '0');
          }
        else
          {
            sum += p_isbn[i] - '0';
          }
        count++;
      }

    int cle = (10 - sum % 10);
    return cle == p_isbn[p_isbn.length () - 1] - '0' ;

    cout << p_isbn;

  }

} /* namespace util */

// Fin du code.