/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ReferenceException.cpp
 * Author: etudiant
 *
 * Created on 8 avril 2022, 18:12
 */

#include "ReferenceException.h"


/**
 * \brief constructeur de la classe ReferenceException.
 * \param[in] p_raison un string qui contient la raison pour laquelle cette exception est appelée.
 **/


ReferenceException::ReferenceException (const std::string& p_raison) : runtime_error (p_raison) { }


/**
 * \brief constructeur de la classe ReferenceDejaPresentException.
 * \param[in] p_raison un string qui contient la raison pour laquelle cette exception est appelée.
 **/


ReferenceDejaPresenteException::ReferenceDejaPresenteException (const std::string & p_raison) : ReferenceException (p_raison) { // TODO Auto-generated constructor stub
}


/**
 * \brief constructeur de la classe ReferenceAbsenteException.
 * \param[in] p_raison un string qui contient la raison pour laquelle cette exception est appelée.
 **/


ReferenceAbsenteException::ReferenceAbsenteException (const std::string & p_raison) : ReferenceException (p_raison) {

  // TODO Auto-generated constructor stub
}



