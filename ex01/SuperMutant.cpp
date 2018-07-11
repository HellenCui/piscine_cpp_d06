

#include "SuperMutant.hh"
#include <iostream>
SuperMutant::SuperMutant(){
    std::cout  << "Gaaah. Me want smash heads !" <<std::endl;
    changeHP(170);
    changeType("Super Mutant");
}

SuperMutant::~SuperMutant(){
    std::cout  << "Aaargh ..." <<std::endl;
}

void SuperMutant::takeDamage(int damage){
    damage = damage - 3;
    if (damage > 0 && _hp > 0) {
        _hp = _hp - damage ;
    }
}
