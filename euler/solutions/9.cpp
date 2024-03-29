#include <cmath>
#include <iostream>

// Runtime: 0m0.003s

static constexpr int target = 1000;

static constexpr inline bool is_integer(const float& number) noexcept {
  return number == std::ceil(number);
}

int main(void) {
  int a, b;
  float c;

  for (a = 1; a <= target; ++a) {
    for (b = 1; b <= target; ++b) {
      c = std::sqrt((a*a) + (b*b));

      if (!is_integer(c)) {
        continue;
      }

      if (a + b + c == target) {
        a = a * b * c;
        std::cout << a << std::endl;
        goto conclusion;
      }
    }
  }

 conclusion:
  return 0;
}
