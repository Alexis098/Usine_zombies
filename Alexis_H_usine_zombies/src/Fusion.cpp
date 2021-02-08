#include "Fusion.h"

Fusion::Fusion(): Zombie (100,10,"Fusion")
{
    //ctor
}

Fusion::~Fusion()
{
    //dtor
}


void Fusion::operator+=(Zombie & z){
    setPv(getPv() + z.getPv());
    setAttack(getAttack() + z.getAttack());
}
