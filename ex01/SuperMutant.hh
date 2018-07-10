

#ifndef SuperMutant_hpp
#define SuperMutant_hpp

#include <string>
#include "AEnemy.hpp"

class SuperMutant : virtual public AEnemy {
protected:
    SuperMutant();
    
public:
    virtual ~SuperMutant();
    virtual void takeDamage(int);
protected:
};

#endif /* SuperMutant_hpp */
