#include <iostream>
#include <string>

// Runtime: 0m0.024s

// Both numbers must be 3-digit numbers.
static constexpr int initial_number = 100;
static constexpr int max_number = 999;

static inline bool is_palindrome(const int& number) {
  const std::string parse = std::to_string(number);

  for (int i = 0, j = parse.length() - 1; i < j; ++i, --j) {
    if (parse[i] != parse[j]) {
      return false;
    }
  }

  return true;
}

int main(void) {
  int largest_palindrome = 0;
  int current_number;

  for (int i = initial_number; i <= max_number; ++i) {
    for (int j = initial_number; j <= max_number; ++j) {
      current_number = i * j;

      if (is_palindrome(current_number)) {
        largest_palindrome = std::max(largest_palindrome, current_number);
      }
    }
  }

  std::cout << largest_palindrome << std::endl;

  return 0;
}
