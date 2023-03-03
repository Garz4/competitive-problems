#include <iostream>

static constexpr bool is_multiple(const int& number) {
  return number % 3 == 0 || number % 5 == 0;
}

int main() {
  const int limit = 1000;
  unsigned long long sum = 0;

  for (int i = 0; i < limit; ++i) {
    if (is_multiple(i)) {
      sum += i;
    }
  }

  std::cout << sum << std::endl;

  return 0;
}