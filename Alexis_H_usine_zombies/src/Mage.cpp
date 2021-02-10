#include "Mage.h"


Mage::Mage(): Zombie (50,5,"Mage")
{
    //ctor

}

Mage::~Mage()
{
    //dtor
}

int Mage::getCompteur(){
    return compteur;
}

void Mage::setCompteur(int c){
    compteur = c;
}


void Mage::spellMage(Zombie* cible){
    //for (int i=0; i<1;i++){
    if (getCompteur()==0){
        //cible->setArmor(cible->getArmor()*0);
    cible->setAttack(cible->getAttack()/2);
    setCompteur(1);
    }else{
        cout<<"Le sort a deja ete utilise"<<endl;
        cible->setPv(cible->getPv()-getAttack());
    }



    //}

}


