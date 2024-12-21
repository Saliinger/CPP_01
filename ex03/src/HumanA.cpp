#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
  this->_name = name;
  this->_weapon = weapon;
  return;
}

HumanA::~HumanA() {
  return;
}

void HumanA::attack() {
  std::cout << this->_name << " attacks with their " << this->_weapon.getType()<< std::endl;

}