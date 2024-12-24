//
// Created by Alexis Noukan on 24/12/2024.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(const std::string &type);
		~Weapon();
		const std::string &getType() const;
		void setType(const std::string &type);
};

#endif //WEAPON_HPP
