#include <iostream>

// Runtime: About 30-40 mins.

static unsigned long long lattice_paths = 0;
static constexpr size_t grid_size = 17;

static inline void get_paths(const size_t& i, const size_t& j) {
  if (i == grid_size && j == grid_size) {
    lattice_paths++;
    return;
  } else if (i > grid_size || j > grid_size) {
    return;
  }

  get_paths(i + 1, j);
  get_paths(i, j + 1);
}

int main(void) {
  get_paths(0, 0);
  std::cout << lattice_paths << std::endl;
  return 0;
}
