#ifndef FUSION_H
#define FUSION_H

#include "Zombie.h"


class Fusion : public Zombie
{
    public:
        Fusion();
        ~Fusion();

        void operator +=(Zombie &z);

    protected:

    private:
};

#endif // FUSION_H
