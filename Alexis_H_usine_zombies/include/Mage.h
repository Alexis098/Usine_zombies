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
        int getCompteur();
        void setCompteur(int c);




    protected:

    private:
        int compteur = 0;

};

#endif // MAGE_H
