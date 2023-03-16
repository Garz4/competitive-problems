#include <iostream>
#include <climits>

#include "../utils/euler.hpp"

// Runtime: 16m24.818s

static constexpr int initial_value = 1;
static constexpr int limit = INT_MAX;
static constexpr int expected_divisors = 500;

static inline constexpr int get_total_divisors(
    const unsigned long long& number) {
  int total_divisors = 0;

  for (int i = 1; i <= number; ++i) {
    if (number % i == 0) {
      total_divisors++;
    }

    if (total_divisors >= expected_divisors) {
      break;
    }
  }

  return total_divisors;
}

int main(void) {
  unsigned long long first_triangle_number;
  int current_divisors;
  const auto triangle_numbers = euler::triangle_numbers();

  for (auto i : triangle_numbers) {
    current_divisors = get_total_divisors(i);

    if (current_divisors >= expected_divisors) {
      first_triangle_number = i;
      break;
    }
  }

  std::cout << first_triangle_number << std::endl;

  return 0;
}
