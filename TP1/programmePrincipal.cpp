/**
 * \file programmePrincipal.cpp
 * \brief
 */

#include <iostream>
#include <array>
#include "fonctionsUtilitaires.h"


using namespace std;


int
main ()
{

  int nbEleves;
  array<array<int, MAX_EXAMENS>, MAX_ETUDIANTS> tabNotes;

  bool valeurCorrecte = false;
  while (!valeurCorrecte)
    {
      cout << "Saisissez le nombre d'élèves" << endl;
      cin >> nbEleves;
      if (nbEleves > 0 && nbEleves <= MAX_ETUDIANTS)
        {
          valeurCorrecte = true;
        }
    }
  cout << "Saisir uniquement des nombres entiers positifs et inférieurs à 100 " << endl <<
          "(ce programme ne prend pas en charge la validation de saisie)" << endl;
  saisieNotes (tabNotes, &nbEleves);
  cout << "taille = " << tabNotes.size () << endl;
  cout << "note minimum : " << minimum (tabNotes, &nbEleves) << endl;
  cout << "note maximum :" << maximum (tabNotes, &nbEleves) << endl;
  cout << "écart type : " << ecartType (tabNotes[0]) << endl;

  afficherTableau (tabNotes, &nbEleves);
  return 0;
}
