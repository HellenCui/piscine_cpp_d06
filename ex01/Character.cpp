

#include "Character.hpp"
#include <iostream>
Character::Character(){
    std::cout << "* SPROTCH *";
}

Character::Character(std::string const & name):
_name(name)
{
    _ap = 40;
    _recoverNum = 0;
}

Character::~Character(){
    
}

void Character::recoverAP(){
    if (_recoverNum < 40) {
        _ap = _ap + 10;
    }
}

void Character::equip(AWeapon* equip){
    _equip = equip;
}

void Character::attack(AEnemy* aEnemy){
    _aEnemy = aEnemy;
    std::cout  << getName() << " attacks "<< _aEnemy->getType() <<" with a " << _equip->getName() <<std::endl;
    if (_equip) {
        _equip->attack();
        _ap = _ap - _equip->getAPCost();
        _aEnemy->takeDamage(_equip->getDamage());
        if (_aEnemy->getHP() <= 0) {
            _aEnemy = NULL;
        }
    }
    
}

std::string Character::getName() const{
    return _name;
}

int Character::getAP() const{
    return _ap;
}

AWeapon* Character::getWeapon() const{
    return _equip;
}

std::ostream & operator<<(std::ostream & os, Character const & perso) {
    os << perso.getName() <<  " has " << perso.getAP() << " AP and ";
    std::string weaponName = perso.getWeapon()->getName();
    if (!weaponName.empty()) {
        os << "wields a " << perso.getWeapon()->getName();
    }
    else {
        os << "is unarmed";
    }
    os << std::endl;
    return os;
}
