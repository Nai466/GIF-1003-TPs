/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ReferenceException.h
 * Author: etudiant
 *
 * Created on 8 avril 2022, 18:12
 */

#ifndef REFERENCEEXCEPTION_H
#define REFERENCEEXCEPTION_H

#include <stdexcept>
#include <string>
#include <cstring>

/**
 * \class ReferenceException
 * \brief Cette classe sert à la manipulation exceptions du type ReferenceException.
 *
 *              cette classe contient seulement un constructeur.\n
 */

class ReferenceException : public std::runtime_error
{
public:
  ReferenceException (const std::string& p_raison);
};

/**
 * \class ReferenceDejaPresentException
 * \brief Cette classe sert à la manipulation exceptions du type ReferenceDejaPresentException.
 *
 *              cette classe contient seulement un constructeur.\n
 */

class ReferenceDejaPresenteException : public ReferenceException
{
public:
  ReferenceDejaPresenteException (const std::string& p_raison);


};

/**
 * \class ReferenceAbsenteException
 * \brief Cette classe sert à la manipulation exceptions du type ReferenceAbsenteException.
 *
 *              cette classe contient seulement un constructeur.\n
 */

class ReferenceAbsenteException : public ReferenceException
{
public:
  ReferenceAbsenteException (const std::string& p_raison);


};


#endif /* REFERENCEEXCEPTION_H */

