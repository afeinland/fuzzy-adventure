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
#include "Zombie.h"


Zombie::Zombie(char * name, int bL)
:Monster(name), brainLevel(bL)
{}

void Zombie::attack()
{
    double healthLost = (double)brainLevel * 1.5;
    std::cout << "Zombie " << name << " bit your arm off! "
        << healthLost << " health lost." << std::endl;
}

Zombie::~Zombie()
{
}

