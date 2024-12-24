//
// Created by Alexis Noukan on 24/12/2024.
//

#include "../include/Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string &Weapon::getType() const
{
	return this->_type;
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}