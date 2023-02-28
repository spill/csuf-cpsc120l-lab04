// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtrinh02@csu.fullerton.edu
// @rtinh02
//
// Lab 05-02
// Partners: @gimenar27
//
// average
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  double average{0.0};
  for (int i = 1; i < arguments.size(); ++i) {
    sum += std::stod(arguments.at(i));
    if (arguments.size() == 2) {
      average = sum;
    } else if (arguments.size() == 3) {
      average = sum / 2;
    } else if (arguments.size() == 4) {
      average = sum / 3;
    } else if (arguments.size() == 5) {
      average = sum / 4;
    } else if (arguments.size() == 6) {
      average = sum / 5;
    }
  }

  std::cout << " average = " << average;

  return 0;
}
