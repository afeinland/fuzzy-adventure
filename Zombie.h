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

#include <string>
#include <iostream>
#include "Monster.h"

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie: Monster
{
    int brainLevel;

public:
    Zombie(char * name = "");

    void attack();

    ~Zombie();

};

#endif /* ZOMBIE_H */
