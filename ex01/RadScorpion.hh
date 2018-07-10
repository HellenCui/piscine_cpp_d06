
#ifndef RadScorpion_hpp
#define RadScorpion_hpp

#include <string>
#include "AEnemy.hpp"

class RadScorpion : virtual public AEnemy {
public:
    RadScorpion();
    virtual ~RadScorpion();
    virtual void takeDamage(int);
protected:
};

#endif /* RadScorpion_hpp */
