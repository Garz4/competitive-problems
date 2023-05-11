#include <algorithm>
#include <iostream>
#include <vector>

#include "../utils/euler.hpp"

// Runtime: 0m0.702s

static std::vector<std::string> permutations;
static const std::vector<int> divisibles = {2, 3, 5, 7, 11, 13, 17};

static void permute(std::string& current, int left, int right) {
  if (left == right) {
    permutations.push_back(current);
  } else {
    for (int i = left; i <= right; i++) {
      std::swap(current[left], current[i]);

      if (current.front() != '0') {
        permute(current, left + 1, right);
      }

      std::swap(current[left], current[i]);
    }
  }
}

static inline bool check_property(
    const std::string& permutation,
    const std::size_t& index_1,
    const std::size_t& index_2,
    const std::size_t& index_3,
    const std::size_t& index_divisible) noexcept {
  return std::stoi(std::string() +
                   permutation[index_1] +
                   permutation[index_2] +
                   permutation[index_3])
           % divisibles[index_divisible] == 0;
}

int main() {
  std::string base = "0123456789";
  euler::max_natural sum = 0;

  permute(base, 0, base.length() - 1);

  for (const auto& permutation : permutations) {
    if (check_property(permutation, 1, 2, 3, 0)
        && check_property(permutation, 2, 3, 4, 1)
        && check_property(permutation, 3, 4, 5, 2)
        && check_property(permutation, 4, 5, 6, 3)
        && check_property(permutation, 5, 6, 7, 4)
        && check_property(permutation, 6, 7, 8, 5)
        && check_property(permutation, 7, 8, 9, 6)) {
      sum += std::stoull(permutation);
    }
  }

  std::cout << sum << std::endl;

  return 0;
}

