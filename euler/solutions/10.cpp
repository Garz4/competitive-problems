#include <iostream>

#include "../utils/euler.hpp"

// Runtime: 0m0.161s

static constexpr int limit = 2000000;

int main(void) {
  euler::max_natural sum = 0;
  const auto primes = euler::prime_numbers();

  for (int i = 0; i < primes.size() && primes[i] < limit; ++i) {
    sum += primes[i];
  }

  std::cout << sum << std::endl;

  return 0;
}
