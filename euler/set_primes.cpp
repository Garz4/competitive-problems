#include <cmath>
#include <fstream>
#include <iostream>

#include "numbers.hpp"

static constexpr unsigned long long limit = 100000;

static inline bool is_prime(const unsigned long long& number) {
  for (int i = 2; i <= std::ceil(std::sqrt(number)); ++i) {
    if (number % i == 0) {
      return false;
    }
  }

  return true;
}

int main(void) {
  std::ofstream primes_file;

  primes_file.open(primes_filename);

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
