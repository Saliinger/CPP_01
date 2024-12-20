#include <iostream>

int main() {
  std::string s = "HI THIS IS BRAIN";
  std::string &stringREF = s;
  std::string *stringPTR = &s;

  std::cout << "This is string " <<s << std::endl;
  std::cout << "This is string address " << &s << std::endl;
  std::cout << "This is stringREF " << stringREF << std::endl;
  std::cout << "This is stringREF address " << &stringREF << std::endl;
  std::cout << "This is stringPTR " << *stringPTR << std::endl;
  std::cout << "This is stringPTR address " << stringPTR << std::endl;
  return 0;
}