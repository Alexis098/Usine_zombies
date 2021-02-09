#include "Rapace.h"

Rapace::Rapace() : Zombie (50,5,"Rapace")
{
    /*int s = getPv()/2;
    int a= getAttack()/2;
    string n = "Rapace";*/
}

Rapace::~Rapace()
{
    //dtor
}

void Rapace::rapidAttack(Zombie* cible){
    cible->setPv(cible->getPv()-getAttack());
    setPv(getPv()+getAttack());
}
