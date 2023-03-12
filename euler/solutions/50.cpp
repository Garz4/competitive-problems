#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <set>

static inline bool is_prime(const unsigned long long& number) {
 for (unsigned long long i = 2; i <= std::ceil(std::sqrt(number)); i++) {
      if (number % i == 0) {
        return false;
      }
  }

  return true;
}

int main() {
  std::vector<unsigned long long> primes{2};
  std::set<unsigned long long> unique;
  const unsigned long long limit = 1000000;
  unsigned long long biggest_prime = 0;
  unsigned long long largest_terms = 0;
  unsigned long long current_sum;
  unsigned long long terms;

  for (unsigned long long i = 3; i < limit; ++i) {
    if (is_prime(i)) {
      primes.push_back(i);
    }
  }

  for (unsigned long long i = 0; i < primes.size(); ++i) {
    terms = 1;
    current_sum = primes[i];

    for (unsigned long long j = i + 1; j < primes.size(); ++j) {
      current_sum += primes[j];
      terms++;

      if (current_sum > limit) {
        break;
      }

      if (std::binary_search(primes.begin(), primes.end(), current_sum)
       && largest_terms < terms) {
        biggest_prime = std::max(biggest_prime, current_sum);
      unique.insert(biggest_prime);
      largest_terms = terms;
      }
    }
  }

  std::cout << biggest_prime << std::endl;

  return 0;
}
