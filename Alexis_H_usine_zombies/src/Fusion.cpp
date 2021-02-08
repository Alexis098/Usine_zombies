#include "Fusion.h"

Fusion::Fusion(): Zombie (50,5,"Fusion")
{
    //ctor
}

Fusion::~Fusion()
{
    //dtor
}
/*
int Fusion::getPv(){
    return pv;
}

void Fusion::setPv(int s){
    pv = s;
}

int Fusion::getAttack(){
    return attack;
}

void Fusion::setAttack(int a){
    attack = a;
}*/

void Fusion::operator+=(Zombie & z){
    if(getPv()>=z.getPv()+z.getArmor() && getAttack()>=z.getAttack()){
        setPv(getPv() + z.getPv() + z.getArmor());
        setAttack(getAttack() + z.getAttack());
        z.~Zombie();
    }/*else if (getPv(500) && getAttack(200)) {
        cout<<"Fin du monde, fin de la partie"<<endl;
    }*/else{
        //~Fusion();
        cout<<"Le zombie ultime est mort dans d'atroces souffrances"<<endl;
    }
}

void Fusion::operator+=(Bomber & b){
    b.~Bomber();
    //~Fusion();
    cout<<"Le Bomber et le zombie ultime ont explosés !"<<endl;
}







