#include <cmath>
#include <fstream>
#include <iostream>

#include "euler.hpp"

static constexpr euler::max_natural limit = 10000000;

static constexpr inline bool is_prime(const euler::max_natural& number) {
  for (int i = 2; i <= std::ceil(std::sqrt(number)); ++i) {
    if (number % i == 0) {
      return false;
    }
  }

  return true;
}

int main(void) {
  std::ofstream primes_file;

  primes_file.open(euler::prime_numbers_filename);

  if (!primes_file.is_open()) {
    throw std::runtime_error("Error opening the file.");
  }

  primes_file << "2\n";

  for (int i = 2; i < limit; ++i) {
    if (is_prime(i)) {
      primes_file << i << "\n";
    }
  }

  primes_file.close();

  return 0;
}
