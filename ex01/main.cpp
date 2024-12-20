#include "include/Brain.hpp"

int main() {
	Zombie *newZomb = newZombie("Zombie");
	Zombie *horde = zombieHorde(40, "HORDE");
	newZomb->anounce();
	randomChump("TGS");
	for(int i = 0; i < 40; i++)
		horde[i].anounce();
	delete newZomb;
	delete[] horde;
	return 0;
}