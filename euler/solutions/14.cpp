#include <iostream>

// Runtime: 0m0.349s

static constexpr int limit = 1000000;

static constexpr unsigned long long get_chain(const int& number) {
  unsigned long long chain = 0;
  unsigned long long current = number;

  while (current != 1) {
    if (current % 2 == 0) {
      current = current / 2;
    } else {
      current = (3 * current) + 1;
    }

    chain++;
  }

  return chain;
}

int main(void) {
  int starting_number = 0;
  unsigned long long starting_max = 0;

  for (int i = 1; i < limit; ++i) {
    auto chain = get_chain(i);

    if (starting_max < chain) {
      starting_number = i;
      starting_max = chain;
    }
  }

  std::cout << starting_number << std::endl;

  return 0;
}
