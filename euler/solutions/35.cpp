#include <algorithm>
#include <iostream>

#include "../utils/euler.hpp"

// Runtime: 0m0.181s

static constexpr int limit = 1000000;
static const auto primes = euler::prime_numbers();

static constexpr inline bool rotations_are_primes(
    const euler::max_natural& prime) noexcept {
  auto prime_aux = prime;
  int digits = 1;

  while (prime_aux != 0) {
    digits *= 10;
    prime_aux /= 10;
  }

  // Don't ask why, just vibe with it.
  digits /= 10;

  int leading = prime / digits;
  int rotation = ((prime % digits) * 10) + leading;

  while (rotation != prime) {
    if (!std::binary_search(primes.begin(), primes.end(), rotation)) {
      return false;
    }

    leading = rotation / digits;
    rotation = ((rotation % digits) * 10) + leading;
  }

  return true;
}

int main() {
  euler::max_natural circular_numbers = 0;

  for (std::size_t i = 0; i < primes.size() && primes[i] < limit; ++i) {
    if (rotations_are_primes(primes[i])) {
      circular_numbers++;
    }
  }

  std::cout << circular_numbers << std::endl;

  return 0;
}
