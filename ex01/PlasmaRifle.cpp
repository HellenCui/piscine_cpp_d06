

#include "PlasmaRifle.hh"
#include <iostream>
PlasmaRifle::PlasmaRifle(){
    changeName("Plasma Rifle");
    changeApcost(5);
    changeDamage(21);
}

PlasmaRifle::~PlasmaRifle() {
}

void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *"<< std::endl;
}


