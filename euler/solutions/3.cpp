#include <iostream>
#include <vector>

#include "../utils/euler.hpp"

static constexpr unsigned long long number = 600851475143;

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
