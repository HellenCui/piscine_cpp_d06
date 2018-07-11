
#ifndef Character_hh
#define Character_hh

#include <string>
#include "AWeapon.hh"
#include "AEnemy.hh"
class Character{
protected:
    Character();
public:
    Character(std::string const & name);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(AEnemy*);
    std::string getName() const;
    int getAP() const;
    AWeapon* getWeapon() const;
protected:
    std::string _name;
    int _ap;
    int _recoverNum;
    AWeapon* _equip;
    AEnemy* _aEnemy;
};


std::ostream & operator<<(std::ostream & os, Character const & perso);

#endif
