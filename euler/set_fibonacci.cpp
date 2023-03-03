#include <cmath>
#include <fstream>
#include <iostream>

#include "numbers.hpp"

static constexpr unsigned long long limit = 1000000000000000000;

int main(void) {
  std::ofstream fibonacci_file;

  fibonacci_file.open(fibonacci_filename);

  if (!fibonacci_file.is_open()) {
    throw std::runtime_error("Error opening the file.");
  }

  unsigned long long first = 0;
  unsigned long long second = 1;
  unsigned long long third;

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
