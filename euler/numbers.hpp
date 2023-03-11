#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <vector>

constexpr char primes_filename[] = R"(primes.txt)";
constexpr char fibonacci_filename[] = R"(fibonacci.txt)";
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

auto get_primes() {
  return get_numbers(primes_filename);
}

auto get_fibonacci() {
  return get_numbers(fibonacci_filename);
}

auto get_triangle_numbers() {
  return get_numbers(triangle_numbers_filename);
}
