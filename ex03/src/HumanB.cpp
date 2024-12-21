#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->_name = name;
  return;
}

HumanB::~HumanB() {
  return;
}

void HumanB::setWeapon(Weapon weapon) {
  this->_weapon = weapon;
}

void HumanB::attack() {
  std::cout << this->_name << " attacks with their " << ( 0 ? this->_weapon.getType() : "nothing")  << std::endl;
}