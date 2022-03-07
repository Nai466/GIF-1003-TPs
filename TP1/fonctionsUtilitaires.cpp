/*
 * fonctionsUtilitaires.cpp
 *
 *  Created on: 2021-08-18
 *      Author: th. eude
 */
#include <math.h>
#include <iostream>
#include "fonctionsUtilitaires.h"
#include <array>
using namespace std;


void
saisieNotes (array<array<int, MAX_EXAMENS>, MAX_ETUDIANTS > & p_tabNotes, int* p_nbEleves)
{

  for (int i = 0; i < *p_nbEleves; i++)
    {
      for (int j = 0; j < MAX_EXAMENS; j++)
        {
          cout << "Saisissez la note de l'examen " << j + 1 << endl;
          cin >> p_tabNotes[i][j];
        }
    }
}


int
minimum (array<array<int, MAX_EXAMENS>, MAX_ETUDIANTS >& p_tabNotes, int* p_nbEleves)
{
  int noteFaible = 100;
  for (int i = 0; i < *p_nbEleves; i++)
    {
      for (int j = 0; j < MAX_EXAMENS; j++)
        {
          if (p_tabNotes[i][j] < noteFaible)
            {
              noteFaible = p_tabNotes[i][j];
            }
        }
    }
  return noteFaible;
}


int
maximum (array<array<int, MAX_EXAMENS>, MAX_ETUDIANTS >& p_tabNotes, int* p_nbEleves)
{
  int noteelevee = 0;
  for (int i = 0; i < *p_nbEleves; i++)
    {
      for (int j = 0; j < MAX_EXAMENS; j++)
        {
          if (p_tabNotes[j][j] > noteelevee)
            {
              noteelevee = p_tabNotes[i][j];
            }
        }
    }
  return noteelevee;

}


double
ecartType (array<int, MAX_EXAMENS>& p_tabNotesEtudiant)
{
  int i = 0;
  float somme = 0;
  float sommeCarree = 0;

  while (i < MAX_EXAMENS)
    {
      somme += p_tabNotesEtudiant[i];
      sommeCarree += p_tabNotesEtudiant[i] * p_tabNotesEtudiant[i];
      i++;
    }
  float moyenne;
  moyenne = somme / MAX_EXAMENS;
  double variance;
  variance = sommeCarree / MAX_EXAMENS - moyenne * moyenne;
  double ecartType;
  ecartType = sqrt (variance);
  return ecartType;
}


void
afficherTableau (array<array<int, MAX_EXAMENS>, MAX_ETUDIANTS >& p_tabNotes, int* p_nbEleves)
{
  for (int i = 0; i < *p_nbEleves; i++)
    {
      cout << "Notes de l'étudiant " << i + 1 << "" << endl;
      for (int j = 0; j < MAX_EXAMENS; j++)
        {
          cout << "Examen " << j + 1 << " : " << p_tabNotes[i][j] << endl;
        }
    }
}
