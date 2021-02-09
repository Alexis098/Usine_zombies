#include "Zombie.h"
#include "Bomber.h"
#include"Tank.h"
#include "Rapace.h"
#include "Mage.h"
#include "Fusion.h"


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

    Tank t1;
    t1.showInfos();

    Rapace r1;
    r1.showInfos();
    r1.rapidAttack(&z1);
    r1.showInfos();

    t1.attackTank(&z1);
    t1.showInfos();

    t1.chargeTank(&z1);
    z1.showInfos();

    Mage m1;
    m1.spellMage(&t1);
    t1.showInfos();

    Fusion f1;
    f1+=m1;
    f1.showInfos();



    return 0;
}
