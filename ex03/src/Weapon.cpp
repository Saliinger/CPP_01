#include "../include/Weapon.hpp"

Weapon::Weapon() {
  return;
}

Weapon::Weapon(std::string type) {
  this->type = type;
  return;
}

Weapon::~Weapon() {
  return;
}

void Weapon::setType(std::string type) {
  this->type = type;
}

std::string Weapon::getType() {
  return this->type;
}