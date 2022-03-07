/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   validationFormat.h
 * Author: etudiant
 *
 * Created on 31 janvier 2022, 18:28
 */

#ifndef VALIDATIONFORMAT_H
#define VALIDATIONFORMAT_H
#include <string>

bool validerFormatNom (const std::string& Format_nom);
bool validerCodeIssn (const std::string& Code_issn);
bool validerCodeIsbn (const std::string& Code_isbn);



#endif /* VALIDATIONFORMAT_H */