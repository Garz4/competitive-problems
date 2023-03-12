#include <iostream>

#include "../utils/euler.hpp"

static constexpr int limit = 2000000;

int main(void) {
  unsigned long long sum = 0;
  const auto primes = euler::prime_numbers();

  for (int i = 0; i < primes.size() && primes[i] < limit; ++i) {
    sum += primes[i];
  }

  std::cout << sum << std::endl;

  return 0;
}