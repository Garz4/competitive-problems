#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace euler {

constexpr char prime_numbers_filename[] = R"(../utils/primes.txt)";
constexpr char fibonacci_sequence_filename[] = R"(../utils/fibonacci.txt)";
constexpr char triangle_numbers_filename[] = R"(../utils/triangle_numbers.txt)";

// Throws runtime error.
std::vector<unsigned long long> get_numbers(const char* filename) {
  std::ifstream numbers_file(filename);

  if (!numbers_file.is_open()) {
    throw std::runtime_error(std::string("Error opening the file: '")
                             + filename + "'.");
  }

  std::vector<unsigned long long> response;
  std::string line;
  unsigned long long current_number;

  while (std::getline(numbers_file, line)) {
    std::istringstream parsed(line);
    parsed >> current_number;
    response.push_back(current_number);
  }

  numbers_file.close();

  return response;
}

auto prime_numbers() { return get_numbers(prime_numbers_filename); }
auto fibonacci_sequence() { return get_numbers(fibonacci_sequence_filename); }
auto triangle_numbers() { return get_numbers(triangle_numbers_filename); }

} // euler
