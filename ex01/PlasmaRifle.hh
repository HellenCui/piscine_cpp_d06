

#ifndef PlasmaRifle_hpp
#define PlasmaRifle_hpp

#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{    
public:
    PlasmaRifle();
    ~PlasmaRifle();
    virtual void attack() const;
protected:
};

#endif 
