//
//  Victim.hpp
//  homework7.10
//
//  Created by 郭晨成 on 2018/7/10.
//  Copyright © 2018年 chenchengguo. All rights reserved.
//

#ifndef Victim_hpp
#define Victim_hpp

#include <string>

class Victim{
protected:
    Victim();
public:
    explicit Victim(std::string const& name);
    virtual ~Victim();
    std::string const& getName() const;
    
    virtual void changeName(std::string name);
    virtual void victimDeath();
    virtual void introduceSelf();
    virtual void getPolymorphed() const;
protected:
    std::string _name;
private:
};

#endif
