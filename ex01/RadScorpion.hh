
#ifndef RadScorpion_hh
#define RadScorpion_hh

#include <string>
#include "AEnemy.hh"

class RadScorpion : virtual public AEnemy {
public:
    RadScorpion();
    virtual ~RadScorpion();
    virtual void takeDamage(int);
protected:
};

#endif /* RadScorpion_hpp */
