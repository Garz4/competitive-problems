#include <iostream>
#include <vector>

#include "../utils/euler.hpp"

static constexpr unsigned long long target = 4000000;

int main(void) {
  const auto fibonacci = euler::fibonacci_sequence();
  unsigned long long current_sum = 0;

  for (int i = 0; fibonacci[i] < target; ++i) {
    if (fibonacci[i] % 2 == 0) {
      current_sum += fibonacci[i];
    }
  }

  std::cout << current_sum << std::endl;

  return 0;
}
