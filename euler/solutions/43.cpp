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

int main() {
  std::string base = "0123456789";
  euler::max_natural sum = 0;

  permute(base, 0, base.length() - 1);

  for (const auto& permutation : permutations) {
    if (std::stoi(std::string() + permutation[1] + permutation[2] + permutation[3]) % divisibles[0] == 0
        && std::stoi(std::string() + permutation[2] + permutation[3] + permutation[4]) % divisibles[1] == 0
        && std::stoi(std::string() + permutation[3] + permutation[4] + permutation[5]) % divisibles[2] == 0
        && std::stoi(std::string() + permutation[4] + permutation[5] + permutation[6]) % divisibles[3] == 0
        && std::stoi(std::string() + permutation[5] + permutation[6] + permutation[7]) % divisibles[4] == 0
        && std::stoi(std::string() + permutation[6] + permutation[7] + permutation[8]) % divisibles[5] == 0
        && std::stoi(std::string() + permutation[7] + permutation[8] + permutation[9]) % divisibles[6] == 0) {
      sum += std::stoull(permutation);
    }
  }

  std::cout << sum << std::endl;

  return 0;
}
