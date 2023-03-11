#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace euler {

constexpr char prime_numbers_filename[] = R"(primes.txt)";
constexpr char fibonacci_sequence_filename[] = R"(fibonacci.txt)";
constexpr char triangle_numbers_filename[] = R"(triangle_numbers.txt)";

// Throws runtime error.
template <std::size_t N>
std::vector<unsigned long long> get_numbers(const char (&filename)[N]) {
  std::ifstream numbers_file(filename);

  if (!numbers_file.is_open()) {
    throw std::runtime_error("Error opening the file.");
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

auto prime_numbers() {
  return get_numbers(prime_numbers_filename);
}

auto fibonacci_sequence() {
  return get_numbers(fibonacci_sequence_filename);
}

auto triangle_numbers() {
  return get_numbers(triangle_numbers_filename);
}

} // euler
