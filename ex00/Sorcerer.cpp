//
//  Sorcerer.cpp
//  homework7.10
//
//  Created by 郭晨成 on 2018/7/10.
//  Copyright © 2018年 chenchengguo. All rights reserved.
//

#include "Sorcerer.hpp"
#include <iostream>
Sorcerer::Sorcerer(std::string const& name, std::string const& title):
    _name(name),
    _title(title)
{
    std::cout << getName() << ", " << getTitle() << ", is born !"<< std::endl;
}

Sorcerer::~Sorcerer() {
    sorcererDeath();
}

std::string const& Sorcerer::getName() const{
    return _name;
}

std::string const& Sorcerer::getTitle() const{
    return _title;
}

void Sorcerer::changeName(std::string name){
    _name = name;
}

void Sorcerer::changeTitle(std::string title){
    _title = title;
}

void Sorcerer::sorcererDeath(){
    std::cout << getName() << ", " << getTitle() << ", is dead. Consequences will never be the same !"<< std::endl;
}

void Sorcerer::introduceSelf(){
    std::cout << "I am " << getName() << ", " << getTitle() << ", and I like ponies !"<< std::endl;
}

void Sorcerer::polymorph(Victim const & victim) const{
    victim.getPolymorphed();
}
