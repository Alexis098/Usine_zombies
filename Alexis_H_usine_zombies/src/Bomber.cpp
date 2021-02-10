#include "Bomber.h"


Bomber::Bomber() : Zombie(100,20,"Bomber")
{
    /*setAttack(getAttack()*2);*/
    cout<<"Je suis un zombie bomber"<<endl;
}

/*Bomber::Bomber(int s,int a){
    pv = p;
    attack = a;
}*/

Bomber::~Bomber()
{
    //dtor
}


void Bomber::Explosion(Zombie* cible){
    /*if (getArmor()>0){
        cible->setArmor(cible->getArmor()-(getAttack()*3));
    }else{*/
        cible->setPv(cible->getPv()-(getAttack()*3));
    //}

    cout<<"le zombie bomber s'est fait exploser"<<endl;
}
