#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

class Zombie
{
    public:
        Zombie();
        virtual ~Zombie();

        //GETTER/SETTER
        int getPv();
        void setPv(int s);

        int getAttack();
        void setAttack(int a);

    protected:

    private:
        pv = 50;
        attack = 10;
};

#endif // ZOMBIE_H
