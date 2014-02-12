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

#ifndef YETI_H
#define YETI_H

class Yeti: Monster
{
    int strength;

public:

    Yeti(char * name = "");

    void attack();

    ~Yeti();
};

#endif /* Yeti_H */



