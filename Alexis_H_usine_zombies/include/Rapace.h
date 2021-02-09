#ifndef RAPACE_H
#define RAPACE_H

#include "Zombie.h"

class Rapace : public Zombie
{
    public:
        Rapace();
        ~Rapace();

        void rapidAttack(Zombie* cible);

    protected:

    private:

};

#endif // RAPACE_H
