#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif //BRAIN_H
