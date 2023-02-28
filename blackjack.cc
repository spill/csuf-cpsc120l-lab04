// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtrinh02@csu.fullerton.edu
// @rtinh02
//
// Lab 05-06
// Partners: @gimenar27
//
// blackjack
//


#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  int score = 0;
  if (score <= 21) {
    for (int i = 1; i < arguments.size(); ++i) {
      if (arguments.at(i) == "2") {
        score += 2;
      } else if (arguments.at(i) == "3") {
        score += 3;
      } else if (arguments.at(i) == "4") {
        score += 4;
      } else if (arguments.at(i) == "5") {
        score += 5;
      } else if (arguments.at(i) == "6") {
        score += 6;
      } else if (arguments.at(i) == "7") {
        score += 7;
      } else if (arguments.at(i) == "8") {
        score += 8;
      } else if (arguments.at(i) == "9") {
        score += 9;
      } else if (arguments.at(i) == "10") {
        score += 10;
      } else if (arguments.at(i) == "J" || arguments.at(i) == "K" ||
                 arguments.at(i) == "Q") {
        score += 10;
      } else if ((arguments.at(i) == "A") && ((score + 11) < 21)) {
        score += 11;
      } else if ((arguments.at(i) == "A") && ((score + 11) > 21)) {
        score += 1;
      } else {
        std::cout << "error: unknown card '" << arguments.at(i) << "'\n";
        return 1;
      }
    }
    if (score > 21) {
      std::cout << "Score is " << score << " BUST \n";
    } else if (score == 21 || score <= 21) {
      std::cout << "Score is " << score << "\n";
    }
  }
  return 0;

}
