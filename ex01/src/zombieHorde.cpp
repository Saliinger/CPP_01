#include "../include/Brain.hpp"

Zombie	*zombieHorde(int N, std::string name) {
  Zombie *zombie;

  zombie = new Zombie[N];
  for (int i = 0; i < N; i++)
    zombie[i].setName(name);
  return zombie;
}