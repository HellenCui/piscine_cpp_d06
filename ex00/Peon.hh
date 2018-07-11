
#ifndef Peon_hh
#define Peon_hh

#include <string>
#include "Victim.hh"

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
