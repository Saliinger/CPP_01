//
// Created by Alexis Noukan on 21/12/2024.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private:
      std::string _name;
      Weapon _weapon;
    public:
      HumanA(std::string name, Weapon weapon);
      ~HumanA();
      void attack();
} ;

#endif //HUMANA_HPP
