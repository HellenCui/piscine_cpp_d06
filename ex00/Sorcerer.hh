

#ifndef Sorcerer_hh
#define Sorcerer_hh
#include <string>
#include "Victim.hh"

class Sorcerer{
public:
    explicit Sorcerer(std::string const& name, std::string const& title);
    virtual ~Sorcerer();
    std::string const& getName() const;
    std::string const& getTitle() const;
    
    virtual void changeName(std::string name);
    virtual void changeTitle(std::string title);
    virtual void sorcererDeath();
    virtual void introduceSelf();
    virtual void polymorph(Victim const &) const;
protected:
    std::string _name;
    std::string _title;
private:
};

std::ostream & operator<<(std::ostream & os, Sorcerer & sorcerer);
#endif
