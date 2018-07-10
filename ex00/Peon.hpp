//
//  Peon.hpp
//  homework7.10
//
//  Created by 郭晨成 on 2018/7/10.
//  Copyright © 2018年 chenchengguo. All rights reserved.
//

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
protected:
};

#endif
