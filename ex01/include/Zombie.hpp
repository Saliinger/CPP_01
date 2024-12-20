#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
  private:
    std::string _name;
  public:
    Zombie();
    ~Zombie();
    void anounce();
    void setName(std::string name);
} ;

#endif //ZOMBIE_HPP
