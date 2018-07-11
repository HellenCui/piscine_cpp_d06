
#ifndef AEnemy_hh
#define AEnemy_hh

#include <string>

class AEnemy
{
protected:
    AEnemy();
public:
    AEnemy(int hp, std::string const & type);
    ~AEnemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int);
    virtual void changeHP(int hp);
    virtual void changeType(std::string type);
protected:
    int _hp;
    std::string _type;
};

#endif
