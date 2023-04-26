#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <set>

#include "../utils/euler.hpp"

// Runtime: 0m0.390s

int main() {
  const auto primes = euler::prime_numbers();
  const euler::max_natural limit = 1000000;
  euler::max_natural biggest_prime = 0;
  euler::max_natural largest_terms = 0;
  euler::max_natural current_sum;
  euler::max_natural terms;

  for (euler::max_natural i = 0; i < primes.size(); ++i) {
    terms = 1;
    current_sum = primes[i];

    for (euler::max_natural j = i + 1; j < primes.size(); ++j) {
      current_sum += primes[j];
      terms++;

      if (current_sum > limit) {
        break;
      }

      if (std::binary_search(primes.begin(), primes.end(), current_sum)
          && largest_terms < terms) {
        biggest_prime = std::max(biggest_prime, current_sum);
        largest_terms = terms;
      }
    }
  }

  std::cout << biggest_prime << std::endl;

  return 0;
}
