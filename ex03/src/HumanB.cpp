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
  std::cout << this->_name << this->_weapon.getType() << std::endl;
}