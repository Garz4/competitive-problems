#include <algorithm>
#include <iostream>
#include <string>

#include "../utils/euler.hpp"

// Runtime: 0m0.160s

// Ensure only to search 4-digit numbers.
constexpr short low_boundary = 1000;
constexpr short high_boundary = 10000;

// This is part of the properties to exhibit.
constexpr short increase = 3330;

// We should avoid this only for i.
constexpr short avoid = 1487;

int main() {
  const auto primes = euler::prime_numbers();
  std::string initial_permutation;
  std::string current_permutation;
  int unusual_1;
  int unusual_2;
  int unusual_3;

  for (int i = 0; i < primes.size() && primes[i] < high_boundary; ++i) {
    if (primes[i] >= low_boundary && primes[i] != avoid) {
      unusual_1 = primes[i];
      initial_permutation = std::to_string(unusual_1);
      std::sort(initial_permutation.begin(), initial_permutation.end());

      for (int j = i + 1; j < primes.size() && primes[j] < high_boundary; ++j) {
        if (primes[j] != primes[i] + increase) {
          continue;
        }

        unusual_2 = primes[j];
        current_permutation = std::to_string(unusual_2);
        std::sort(current_permutation.begin(), current_permutation.end());

        if (initial_permutation != current_permutation) {
          continue;
        }

        for (int k = j + 1;
             k < primes.size() && primes[k] < high_boundary; ++k) {
          if (primes[k] != primes[j] + increase) {
            continue;
          }

          unusual_3 = primes[k];
          current_permutation = std::to_string(unusual_3);
          std::sort(current_permutation.begin(), current_permutation.end());

          if (initial_permutation == current_permutation) {
            goto conclusion;
          }
        }
      }
    }
  }

 conclusion:
  std::cout << unusual_1 << unusual_2 << unusual_3 << std::endl;

  return 0;
}
