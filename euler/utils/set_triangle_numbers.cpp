#include <cmath>
#include <fstream>
#include <iostream>

#include "euler.hpp"

static constexpr euler::max_natural limit = 100000;

int main(void) {
  std::ofstream triangles_file;

  triangles_file.open(euler::triangle_numbers_filename);

  if (!triangles_file.is_open()) {
    throw std::runtime_error("Error opening the file.");
  }

  euler::max_natural sum = 0;

  for (euler::max_natural i = 1; i < limit; ++i) {
    sum += i;
    triangles_file << sum << "\n";
  }

  triangles_file.close();

  return 0;
}
