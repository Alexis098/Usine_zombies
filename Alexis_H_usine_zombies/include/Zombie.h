#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>

#include <stdlib.h>

using namespace std;

class Zombie
{
    public:
        Zombie();
        Zombie (int s, int a, string n);
        ~Zombie();

        //GETTER/SETTER
        int getPv();
        void setPv(int s);

        int getAttack();
        void setAttack(int a);

        string getNom();
        void setNom(string n);


        void attackZombie(Zombie* cible);



        void showInfos();



    protected:

    private:
        int pv = 50;
        int attack = 10;
        string nom="Bob";
};

#endif // ZOMBIE_H
