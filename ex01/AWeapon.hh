
#ifndef AWeapon_hpp
#define AWeapon_hpp

#include <string>
class AWeapon
{
protected:
    AWeapon();
    
public:
    explicit AWeapon(std::string const & name, int apcost, int damage);
    ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const;
    
    virtual void changeDamage(int damage);
    virtual void changeApcost(int apcost);
    virtual void changeName(std::string name);
protected:
    std::string _name;
    int _apcost;
    int _damage;
private:
};
#endif 
