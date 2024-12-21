#include <fstream>
#include <iostream>

int print_error(const char *msg) {
  std::cerr << msg << std::endl;
  return 1;
}

std::string replace_all(std::string str, const std::string to_find, const std::string to_replace)
{
  size_t pos = 0;
  size_t find_pos = 0;
  std::string new_str;

  while ((find_pos = str.find(to_find, pos)) != std::string::npos)
  {
    new_str += str.substr(pos, find_pos) + to_replace;
    pos = find_pos + to_find.length();
  }
  new_str += str.substr(pos);
  return new_str;
}

int main(int ac, char **av) {

  if (ac != 4)
    return print_error("Usage: ./replace <filename> <string_to_find> <string_to_replace>");

  const std::string filename = av[1];
  const std::string to_find = av[2];
  const std::string to_replace = av[3];

  /* check for empty */
  if (to_find.empty())
    return print_error("Error: The string to find cannot be empty.");

  /* Open files */
  std::ifstream inputFile(filename);
  if (!inputFile.is_open())
    return print_error("Error: Could not open input file.");

  /* Create to_replace file */
  std::ofstream outputFile(filename + ".replace");
  if (!outputFile.is_open())
    return print_error("Error: Could not open output file.");

  /* Search and replace the s1 by s2 */
  std::string line;
  while (std::getline(inputFile, line))
    outputFile << replace_all(line, to_find, to_replace) << std::endl;

  /* Closing files */
  inputFile.close();
  outputFile.close();
  std::cout << "Replacement complete. Output written to " << filename << ".replace" << std::endl;
  return 0;
}

// yolo
