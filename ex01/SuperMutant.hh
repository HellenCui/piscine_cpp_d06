

#ifndef SuperMutant_hh
#define SuperMutant_hh

#include <string>
#include "AEnemy.hh"

class SuperMutant : virtual public AEnemy {
protected:
    SuperMutant();
    
public:
    virtual ~SuperMutant();
    virtual void takeDamage(int);
protected:
};

#endif /* SuperMutant_hpp */
