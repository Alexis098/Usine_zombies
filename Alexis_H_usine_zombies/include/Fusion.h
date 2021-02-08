#ifndef FUSION_H
#define FUSION_H

#include "Zombie.h"
#include "Bomber.h"


class Fusion : public Zombie
{
    public:
        Fusion();
        ~Fusion();

        void operator +=(Zombie &z);
        void operator+=(Bomber & b);
/*
        int getPv();
        void setPv(int s);

        int getAttack();
        void setAttack(int a);*/

    protected:

    private:
        int pv;
        int attack;
};

#endif // FUSION_H
