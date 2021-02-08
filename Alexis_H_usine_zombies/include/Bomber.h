#ifndef BOMBER_H
#define BOMBER_H

#include "Zombie.h"


class Bomber : public Zombie
{
    public:
        Bomber();
        ~Bomber();



    protected:

    private:
        int attack;

};

#endif // BOMBER_H
