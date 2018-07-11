

#include "AWeapon.hh"
AWeapon::AWeapon(){
    
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_name(name),
_apcost(apcost),
_damage(damage)
{
    
}

AWeapon::~AWeapon(){
    
}

int AWeapon::getAPCost() const{
    return _apcost;
}

int AWeapon::getDamage() const{
    return _damage;
}

std::string AWeapon::getName() const{
    return _name;
}

void AWeapon::attack() const{
    
}

void AWeapon::changeApcost(int apcost){
    _apcost = apcost;
}

void AWeapon::changeDamage(int damage){
    _damage = damage;
}

void AWeapon::changeName(std::string name){
    _name = name;
}
