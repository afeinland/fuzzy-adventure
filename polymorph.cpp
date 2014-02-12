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

#include "Monster.h"
#include "Zombie.h"
#include "Ninja.h"
#include "Yeti.h"

using std::cout;
using std::endl;

const int NUM_MON = 6;

void addMonsters(Monster ** m)
{
    m[0] = new Zombie("ZombieA");
    m[1] = new Zombie("ZombieB");
    m[2] = new Ninja("NinjaA");
    m[3] = new Ninja("NinjaB");
    m[4] = new Yeti("YetiA");
    m[5] = new Yeti("YetiB");
}

void monstersAttack(Monster ** m)
{
    for(int i = 0; i < NUM_MON; ++i)
        m[i] -> attack();
}


int main()
{

    Monster **monsters = new Monster*[NUM_MON];


    addMonsters(monsters);

    return 0;
}

