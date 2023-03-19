#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

// Runtime: 0m0.001s

static constexpr int limit = 1000;
static const std::unordered_map<int, const std::string> words = 
{
{1, "one"},
{2, "two"},
{3, "three"},
{4, "four"},
{5, "five"},
{6, "six"},
{7, "seven"},
{8, "eight"},
{9, "nine"},
{10, "ten"},
{11, "eleven"},
{12, "twelve"},
{13, "thirteen"},
{14, "fourteen"},
{15, "fifteen"},
{16, "sixteen"},
{17, "seventeen"},
{18, "eighteen"},
{19, "nineteen"},
{20, "twenty"},
{30, "thirty"},
{40, "forty"},
{50, "fifty"},
{60, "sixty"},
{70, "seventy"},
{80, "eighty"},
{90, "ninety"},
{100, "hundred"},
{1000, "thousand"}
};

int main(void) {
  int units;
  int tens;
  int hundreds;
  int current_number;
  int total_letters = 0;

  for (int i = 1; i <= limit; ++i) {
    if (i == limit) {
      total_letters += words.at(1).length() + words.at(1000).length();
      break;
    }

    current_number = 0;
    tens = std::floor(i / 10);
    tens = tens % 10;
    hundreds = std::floor(i / 100);
    hundreds = hundreds % 10;

    if (hundreds >= 1) {
      current_number += words.at(hundreds).length()
                      + words.at(100).length();

      // Add length of "and".
      if (i % 100 != 0) {
        current_number += 3;
      }
    }
  
    if (tens == 1) {
      current_number += words.at(i % 100).length();
    } else if (tens > 1) {
      tens = tens * 10;
      current_number += words.at(tens).length();

      if (i % 10 > 0) {
        current_number += words.at(i % 10).length();
      }
    } else if (tens == 0 && i % 10 > 0) {
      current_number += words.at(i % 10).length();
    }

    total_letters += current_number;
  }

  std::cout << total_letters << std::endl;

  return 0;
}
