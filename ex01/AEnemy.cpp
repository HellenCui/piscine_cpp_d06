

#include "AEnemy.hh"
#include <iostream>

AEnemy::AEnemy(){
    
}

AEnemy::AEnemy(int hp, std::string const & type):
_hp(hp),
_type(type)
{
    
}

AEnemy::~AEnemy(){
    
}

std::string AEnemy::getType() const{
    return _type;
}

int AEnemy::getHP() const{
    return _hp;
}

void AEnemy::takeDamage(int damage){
    if (damage > 0 && _hp > 0) {
        _hp = _hp - damage;
    }
}

void AEnemy::changeHP(int hp){
    _hp = hp;
}

void AEnemy::changeType(std::string type){
    _type = type;
}


