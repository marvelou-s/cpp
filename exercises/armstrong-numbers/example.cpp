#include "armstrong_numbers.h"
#include <cmath>

bool armstrong_numbers::is_armstrong_number(int number) {
    int length = number != 0 && number != 1 ? std::log10(std::abs(number)) + 1 : 1;
    int accumulate = 0;
    for (int current = number; current != 0; current /= 10) {
        accumulate += std::pow(current % 10, length);
    }
    return accumulate == number;
}