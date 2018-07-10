//
//  Sorcerer.hpp
//  homework7.10
//
//  Created by 郭晨成 on 2018/7/10.
//  Copyright © 2018年 chenchengguo. All rights reserved.
//

#ifndef Sorcerer_hpp
#define Sorcerer_hpp
#include <string>
#include "Victim.hpp"

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
#endif
