#include "include/Brain.hpp"

int main() {
	Zombie *newZomb = newZombie("Zombie");
	newZomb->anounce();
	randomChump("TGS");
	delete newZomb;
	return 0;
}