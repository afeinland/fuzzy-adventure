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

#include <vector>
#include "Monster.h"
#include "Zombie.h"
#include "Ninja.h"
#include "Yeti.h"

using std::cout;
using std::endl;
using std::vector;


void addMonsters(vector<Monster*> & m)
{
    m.push_back( new Zombie("Zafirah", 2) );
    m.push_back( new Yeti("Yannis", 9) );
    m.push_back( new Ninja("Noburu", 23) );
}

void monstersAttack(vector<Monster*> & m)
{
    for(unsigned i = 0; i < m.size(); ++i)
        m.at(i) -> attack();
}


int main()
{

    vector<Monster*> monsters;

    addMonsters(monsters);

    monstersAttack(monsters);

    return 0;
}

