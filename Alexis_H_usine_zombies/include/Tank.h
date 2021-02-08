#ifndef TANK_H
#define TANK_H

#include "Zombie.h"


class Tank : public Zombie
{
    public:
        Tank();
        ~Tank();

        int getArmor();
        void setArmor(int ar);

        void showInfos();

        void attackTank(Zombie* cible);
        void chargeTank(Zombie* cible);




    protected:

    private:
        int armor;
        //int pv
};

#endif // TANK_H
