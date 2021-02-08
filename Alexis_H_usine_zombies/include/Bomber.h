#ifndef BOMBER_H
#define BOMBER_H

#include "Zombie.h"


class Bomber : public Zombie
{
    public:
        Bomber();
        ~Bomber();

        /*int getA();
        void setA(int a);*/



    protected:

    private:
        int a;

};

#endif // BOMBER_H
