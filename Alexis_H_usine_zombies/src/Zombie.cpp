#include "Zombie.h"

Zombie::Zombie()
{
    pv = 100;
	attack = 10;
	nom = "Default";
	//armor= 0;
}

Zombie::Zombie(int s, int a, string n){
    pv = s;
    attack = a;
    nom = n;
}



Zombie::~Zombie()
{

    cout<<"le zombie "<<getNom()<<" est decede"<<endl;


}


//GETTER/SETTER

int Zombie::getPv(){
    return pv;
}

void Zombie::setPv(int s){
    if (s>100 || s<0){
        pv = 0;
        cerr<<"le zombie "<<getNom()<<" s'est decompose car PV trop eleves"<<endl;
    }else{
        pv = s;
    }

}

int Zombie::getAttack(){
    return attack;
}

void Zombie::setAttack(int a){
    if (a>10 || a<0){
        attack = 0;
        cerr<<"le zombie "<<getNom()<<" s'est decompose car attaque trop elevee"<<endl;
    }else{
        attack = a;
    }
}

string Zombie::getNom(){
    return nom;
}

void Zombie::setNom(string n){
    nom = n;
}

//un zombie peut en attaquer un autre
void Zombie::attackZombie(Zombie* cible){
    cible->setPv(cible->getPv() - getAttack());
}

/*void Zombie::statsZombie(){
    if (getPv()>100 && getAttack()>10){
        //~Zombie();
        cout<<"le zombie s'est decompose"<<endl;
    }
}*/


/*int Zombie::getArmor(){
    return armor;
}

void Zombie::setArmor(int ar){
    armor = ar;
}*/



void Zombie::showInfos(){

    cout << "nom : " << getNom() << endl;
    cout << "pv : " << getPv() << endl;
    cout << "attack : " << getAttack() << endl;
    cout<<endl;

}




