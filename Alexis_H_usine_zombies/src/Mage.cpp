#include "Mage.h"


Mage::Mage(): Zombie (50,5,"Mage")
{
    //ctor

}

Mage::~Mage()
{
    //dtor
}



void Mage::spellMage(Zombie* cible){
    //for (int i=0; i<1;i++){

    cible->setArmor(cible->getArmor()*0);
    cible->setAttack(cible->getAttack()/2);


    //}

}


