#include <iostream>

// Runtime: 0m0.001s

static constexpr char one_hundred_factorial[] =
"933262154439441526816992388562667004907159682643816214685929638952175999932299"
"156089414639761565182862536979208272237582511852109168640000000000000000000000"
"00";

int main(void) {
  int sum = 0;

  for (const auto digit : one_hundred_factorial) {
    if (digit == '\0') {
      break;
    }

    sum += (digit - '0');
  }

  std::cout << sum << std::endl;

  return 0;
}
