// Course: CS 100 <Winter 2014>
//
// First Name: Alex
// Last Name: Feinland
// CS Login: afein001
// UCR email: afein001@ucr.edu
// SID: 861056485
//
// Lecture Section: <001>
// Lab Section: <021>
// TA: Bryan Marsh 
//
// Assignment <HW5>
//
// I hereby certify that the code in this file 
// is ENTIRELY my own original work.

#include <iostream>
#include "Monster.h"
#include "Yeti.h"

Yeti::Yeti(char * name, int s)
:Monster(name), strength(s)
{}

void Yeti::attack()
{
    std::cout << "Yeti " << name << " whacked you upside the head! "
        << strength << " health lost."  << std::endl;
}

Yeti::~Yeti()
{
}


