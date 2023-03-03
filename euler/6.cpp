#include <iostream>

int main(void) {
  constexpr int limit = 100; 
  int sum_of_squares = 0;
  int square_of_sums = 0;

  for (int i = 1; i <= limit; ++i) {
    sum_of_squares += (i * i);
    square_of_sums += i;
  }

  square_of_sums *= square_of_sums;
  std::cout << square_of_sums - sum_of_squares << std::endl;

  return 0;
}
