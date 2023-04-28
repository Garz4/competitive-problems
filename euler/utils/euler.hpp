#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace euler {

// This "natural" definition includes zero.
using min_natural = unsigned short;
using natural = unsigned int;
using big_natural = unsigned long;
using max_natural = unsigned long long;

using min_integer = short;
using integer = int;
using big_integer = long;
using max_integer = long long;

constexpr char prime_numbers_filename[] = R"(../utils/primes.txt)";
constexpr char fibonacci_sequence_filename[] = R"(../utils/fibonacci.txt)";
constexpr char triangle_numbers_filename[] = R"(../utils/triangle_numbers.txt)";

constexpr inline short to_digit(const char& digit) { return digit - '0'; }

// Throws runtime error.
std::vector<max_natural> get_numbers(const char* filename) {
  std::ifstream numbers_file(filename);

  if (!numbers_file.is_open()) {
    throw std::runtime_error(std::string("Error opening the file: '")
                             + filename + "'.");
  }

  std::vector<max_natural> response;
  std::string line;
  max_natural current_number;

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
