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
#include "Ninja.h"

Ninja::Ninja(char * name, int a)
:Monster(name), agility(a)
{}

void Ninja::attack()
{
    double healthLost = (double)agility * 0.25;
    std::cout << "Ninja " << name << " landed a throwing star in your neck! "
        << healthLost << " health lost." << std::endl;
}

Ninja::~Ninja()
{
}


