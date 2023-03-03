#include <iostream>
#include <vector>

#include "numbers.hpp"

static constexpr size_t target_index = 10000;

int main(void) {
  const auto primes = get_primes();

  if (target_index < primes.size()) {
    std::cout << primes[target_index] << std::endl;
  }

  return 0;
}
