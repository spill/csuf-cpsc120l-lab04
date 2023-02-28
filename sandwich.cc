// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtrinh02@csu.fullerton.edu
// @rtinh02
//
// Lab 05-01
// Partners: @gimenar27
//
// sandwich
//

#include <iostream>
#include <string>
#include <vector>

  int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string command{ arguments.at(0) };
  std::string protein{ arguments.at(1) };
  std::string bread{ arguments.at(2) };
  std::string condiment{ arguments.at(3) };

  std::cout << "command: " << command << "\n";
  std::cout << "first argument: " << protein << "\n";
  std::cout << "second argument: " << bread << "\n";
  std::cout << "third argument: " << condiment << "\n";
  std::cout << "A " << protein << " sandwich on " << bread << " with " << condiment << ".";
  return 0;
}
