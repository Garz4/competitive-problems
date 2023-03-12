#include <iostream>
#include <climits>

static constexpr int limit = INT_MAX;
static constexpr int begin_range = 1;
static constexpr int end_range = 20;

int main(void) {
  bool found;

  for (int i = 1; i < limit; ++i) {
    found = true;

    for (int j = begin_range; j <= end_range; ++j) {
      if (i % j != 0) {
        found = false;
        break;
      }
    }

    if (found) {
      std::cout << i << std::endl;
      break;
    }
  }

  return 0;
}