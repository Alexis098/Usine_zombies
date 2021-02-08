#ifndef MAGE_H
#define MAGE_H

#include "Zombie.h"
#include "Tank.h"

class Mage : public Zombie
{
    public:
        Mage();
        ~Mage();

        void spellMage(Zombie* cible);




    protected:

    private:

};

#endif // MAGE_H
