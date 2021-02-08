#include "Zombie.h"
#include "Bomber.h"
#include"Tank.h"

using namespace std;

int main()
{
    Zombie z1;
    z1.setNom("nulEnProg");
    z1.setAttack(5);
    z1.setPv(50);

    z1.showInfos();

    Zombie z2;

    z2.setPv(1);
    z2.setAttack(10);
    z2.setNom("victime");

    z1.attackZombie(&z2);

    z2.showInfos();


    if (z2.getPv()<=0){
        z2.~Zombie();
    }

    Bomber b1;
    b1.showInfos();

    return 0;
}
