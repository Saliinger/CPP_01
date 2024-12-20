#include "../include/Zombie.hpp"

Zombie::Zombie() {
 	return;
}

Zombie::~Zombie() {
  	std::cout << "Zombie is dead" << std::endl;
	return;
}

void Zombie::anounce() {
 	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
  this->_name = name;
}

