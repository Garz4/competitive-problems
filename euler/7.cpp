#include <iostream>
#include <vector>

#include "euler.hpp"

static constexpr size_t target_index = 10000;

int main(void) {
  const auto primes = euler::prime_numbers();

  if (target_index < primes.size()) {
    std::cout << primes[target_index] << std::endl;
  }

  return 0;
}
