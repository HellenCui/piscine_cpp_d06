//
//  Victim.cpp
//  homework7.10
//
//  Created by 郭晨成 on 2018/7/10.
//  Copyright © 2018年 chenchengguo. All rights reserved.
//

#include "Victim.hpp"
#include <iostream>
Victim::Victim(){
}

Victim::Victim(std::string const& name):
_name(name)
{
    std::cout << "Some random victim called "<< getName() << " just popped !"<< std::endl;
}

std::string const& Victim::getName() const{
    return _name;
}

Victim::~Victim() {
    victimDeath();
}

void Victim::changeName(std::string name){
    _name = name;
}

void Victim::victimDeath(){
    std::cout << "Victim "<< getName() << " just died for no apparent reason !"<< std::endl;
}

void Victim::introduceSelf(){
    std::cout << "I’m " << getName() << " and i like otters !"<< std::endl;
}

void Victim::getPolymorphed() const{
    std::cout << getName() << " has been turned into a cute little sheep !"<< std::endl;
}
