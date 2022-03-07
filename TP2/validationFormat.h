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
#include <iostream>

/* namespace util */

namespace util
{

  bool validerFormatNom (const std::string & p_nom);
  bool validerCodeIssn (const std::string & p_issn);
  bool validerCodeIsbn (const std::string & p_isbn);

}

/* namespace util */


#endif /* VALIDATIONFORMAT_H */