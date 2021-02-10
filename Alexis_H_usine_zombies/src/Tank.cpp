#include "Tank.h"

Tank::Tank() : Zombie(100,10,"Tank")
{
    armor = 50;
    cout<<"Je suis un tank"<<endl;
    //pv = getPv()+getArmor();
}

Tank::~Tank()
{
    //dtor
}

int Tank::getArmor(){
    return armor;
}

void Tank::setArmor(int  ar){
    armor = ar;
}


void Tank::showInfos(){

    cout << "nom : " << getNom() << endl;
    cout << "pv : " << getPv() << endl;
    cout << "attack : " << getAttack() << endl;
    cout << "armor : " << getArmor() << endl;
}

void Tank::attackTank(Zombie* cible){
    if (getArmor()>0){
        setArmor(getArmor() - cible->getAttack());
    }else{
        setPv(getPv() - cible->getAttack());
    }
}

void Tank::chargeTank(Zombie* cible){
    if (getArmor()>0){
        cible->setPv(cible->getPv()-getArmor());
    }else{
        cible->setPv(cible->getPv()-getAttack());
    }
}





