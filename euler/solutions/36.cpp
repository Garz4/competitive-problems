#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>

#include "../utils/euler.hpp"

// Runtime: 0m0.031s

constexpr int limit = 1000000;

static inline bool is_palindrome(const std::string& sentence) {
  std::size_t i = 0;

  while (sentence[i] == '0') { ++i; }

  for (std::size_t j = sentence.length() - 1; i < j; ++i, --j) {
    if (sentence[i] != sentence[j]) {
      return false;
    }
  }

  return true;
}

int main() {
  euler::big_natural sum = 0;

  for (int i = 0; i < limit; ++i) {
    if (is_palindrome(std::to_string(i))
        && is_palindrome(std::bitset<64>(i).to_string())) {
      sum += i;
    }
  }

  std::cout << sum << std::endl;

  return 0;
}
