#include "Rapace.h"

Rapace::Rapace() : Zombie (50,5,"Rapace")
{
    /*int s = getPv()/2;
    getAttack()/2;
    string n = "Rapace";*/
}

Rapace::~Rapace()
{
    //dtor
}

void Rapace::rapidAttack(Zombie* cible){
    cible->setPv(cible->getPv()-getAttack()/2);
    setPv(getPv()+getAttack());
}
