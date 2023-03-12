#include <cmath>
#include <fstream>
#include <iostream>

#include "euler.hpp"

static constexpr unsigned long long limit = 100000;

int main(void) {
  std::ofstream triangles_file;

  triangles_file.open(euler::triangle_numbers_filename);

  if (!triangles_file.is_open()) {
    throw std::runtime_error("Error opening the file.");
  }

  unsigned long long sum = 0;

  for (unsigned long long i = 1; i < limit; ++i) {
    sum += i;
    triangles_file << sum << "\n";
  }

  triangles_file.close();

  return 0;
}
