#include <iostream>
#include <vector>

#include "../utils/euler.hpp"

// Runtime: 0m0.174s

static constexpr euler::max_natural number = 600851475143;

int main(void) {
  const auto primes = euler::prime_numbers();

  for (auto i = primes.rbegin(); i != primes.rend(); ++i) {
    if (number % *i == 0) {
      std::cout << *i << std::endl;
      break;
    }
  }

  return 0;
}
