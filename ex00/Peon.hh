
#ifndef Peon_hpp
#define Peon_hpp

#include <string>
#include "Victim.hpp"

class Peon : virtual public Victim {
protected:
    Peon();
    
public:
    explicit Peon(std::string const & name);
    virtual ~Peon();
    virtual void getPolymorphed() const;
protected:
};

#endif
