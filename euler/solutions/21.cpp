#include <iostream>
#include <unordered_set>

#include "../utils/euler.hpp"

// Runtime: 0m0.080s

static constexpr inline auto d(const int& number) noexcept {
  euler::max_natural sum_proper_divisors = 0;

  for (int i = 1; i <= number / 2; ++i) {
    if (number % i == 0) {
      sum_proper_divisors += i;
    }
  }

  return sum_proper_divisors;
}

int main(void) {
  constexpr int limit = 10000;
  euler::max_natural sum = 0;
  std::unordered_set<euler::max_natural> amicable_numbers;

  for (int i = 1; i < limit; ++i) {
    euler::max_natural first = d(i);
    euler::max_natural second = d(first);
    bool are_amicable = i == second && i != first
                     && amicable_numbers.find(first) == amicable_numbers.end()
                     && amicable_numbers.find(second) == amicable_numbers.end();

    if (are_amicable) {
      sum += first + second;
      amicable_numbers.insert(first);
      amicable_numbers.insert(second);
    }
  }

  std::cout << sum << std::endl;

  return 0;
}
