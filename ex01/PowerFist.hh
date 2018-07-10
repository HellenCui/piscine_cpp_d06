

#ifndef PowerFist_hpp
#define PowerFist_hpp

#include <string>
#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
public:
    PowerFist();
    ~PowerFist();
    virtual void attack() const;
protected:
};

#endif /* PowerFist_hpp */
