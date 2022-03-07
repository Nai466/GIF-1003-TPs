/*
 * fonctionsUtilitaires.h
 *
 *  Created on: 2021-08-18
 *      Author: th. eude
 *
 */

#ifndef FONCTIONSUTILITAIRES_H_
#define FONCTIONSUTILITAIRES_H_
#include <array>

const int MAX_EXAMENS = 2;
const int MAX_ETUDIANTS = 4;

void saisieNotes (std::array<std::array<int, MAX_EXAMENS>, MAX_ETUDIANTS > &p_tabNotes, int*);
int minimum (std::array<std::array<int, MAX_EXAMENS>, MAX_ETUDIANTS >& p_tabNotes, int*);
int maximum (std::array<std::array<int, MAX_EXAMENS>, MAX_ETUDIANTS >& p_tabNotes, int*);
double ecartType (std::array<int, MAX_EXAMENS>& p_tabNotesEtudiant);
void afficherTableau (std::array<std::array<int, MAX_EXAMENS>, MAX_ETUDIANTS >& p_tabNotes, int* p_nbEleves);


#endif /* FONCTIONSUTILITAIRES_H_ */
