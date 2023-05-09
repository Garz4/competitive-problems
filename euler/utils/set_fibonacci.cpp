#include <cmath>
#include <fstream>
#include <iostream>

#include "euler.hpp"

static constexpr euler::max_natural limit = 1000000000000000000;

int main(void) {
  std::ofstream fibonacci_file;

  fibonacci_file.open(euler::fibonacci_sequence_filename);

  if (!fibonacci_file.is_open()) {
    throw std::runtime_error("Error opening the file.");
  }

  euler::max_natural first = 0;
  euler::max_natural second = 1;
  euler::max_natural third;

  fibonacci_file << first << "\n";
  fibonacci_file << second << "\n";

  for (third = first + second; third < limit; third = first + second) {
    first = second;
    second = third;
    fibonacci_file << third << "\n";
  }

  fibonacci_file.close();

  return 0;
}
