

#ifndef PlasmaRifle_hh
#define PlasmaRifle_hh

#include <string>
#include "AWeapon.hh"

class PlasmaRifle : virtual public AWeapon
{    
public:
    PlasmaRifle();
    ~PlasmaRifle();
    virtual void attack() const;
protected:
};

#endif 
