

#include "PowerFist.hh"
#include <iostream>
PowerFist::PowerFist(){
    changeName("Power Fist");
    changeApcost(8);
    changeDamage(50);
}

PowerFist::~PowerFist(){
}

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *"<< std::endl;
}
