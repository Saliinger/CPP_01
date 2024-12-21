#include "include/Harl.hpp"

int main() {
  Harl harl;

  std::cout << "DEBUG level:" << std::endl;
  harl.complain("DEBUG");

  std::cout << "INFO level:" << std::endl;
  harl.complain("INFO");

  std::cout << "WARNING level:" << std::endl;
  harl.complain("WARNING");

  std::cout << "ERROR level:" << std::endl;
  harl.complain("ERROR");

  std::cout << "UNKNOWN level:" << std::endl;
  harl.complain("SOMETHING ELSE");
  return 0;
}