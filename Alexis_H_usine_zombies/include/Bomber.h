#ifndef BOMBER_H
#define BOMBER_H

#include "Zombie.h"
//#include "Tank.h"


class Bomber : public Zombie
{
    public:
        Bomber();
        ~Bomber();

        /*int getA();
        void setA(int a);*/

        void Explosion(Zombie* cible);



    protected:

    private:
        int a;

};

#endif // BOMBER_H
