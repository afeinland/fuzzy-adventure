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


#include "Monster.h"

Monster::Monster(char * n)
:name(n)
{}

void Monster::attack()
{
    std::cout << "Monster's attack" << std::endl;
}

Monster::~Monster()
{
}


