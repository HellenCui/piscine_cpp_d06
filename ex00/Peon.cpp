//
//  Peon.cpp
//  homework7.10
//
//  Created by 郭晨成 on 2018/7/10.
//  Copyright © 2018年 chenchengguo. All rights reserved.
//

#include "Peon.hpp"
#include <iostream>

Peon::Peon() {
}

Peon::Peon(std::string const & name) : Victim(name){
    std::cout  << "Zog zog." <<std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..."<< std::endl;
}
