

#ifndef Victim_hh
#define Victim_hh

#include <string>

class Victim{
protected:
    Victim();
public:
    explicit Victim(std::string const& name);
    ~Victim();
    std::string const& getName() const;
    
    virtual void changeName(std::string name);
    virtual void victimDeath();
    virtual void introduceSelf();
    virtual void getPolymorphed() const;
protected:
    std::string _name;
private:
};

std::ostream & operator<<(std::ostream & os, Victim & victim);
#endif
