

#ifndef PowerFist_hh
#define PowerFist_hh

#include <string>
#include "AWeapon.hh"

class PowerFist : virtual public AWeapon
{
public:
    PowerFist();
    ~PowerFist();
    virtual void attack() const;
protected:
};

#endif /* PowerFist_hpp */
