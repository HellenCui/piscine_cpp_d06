
#include "RadScorpion.hpp"
#include <iostream>
RadScorpion::RadScorpion(){
    std::cout  << "* click click click *" <<std::endl;
    changeHP(80);
    changeType("RadScorpion");
}

RadScorpion::~RadScorpion(){
    std::cout  << "* SPROTCH *" <<std::endl;
}

void RadScorpion::takeDamage(int damage){
    damage = damage - 3;
    if (damage > 0 && _hp > 0) {
        _hp = _hp - damage ;
    }
}
