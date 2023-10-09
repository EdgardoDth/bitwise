/*
  Reverse bits of a given 32 bits unsigned integer.

  Solution:
  We need to check every bit on the given number, we use the modulo(%) operator
  and if there is a bit we put a 1 into the new number using the inverse
  position.
*/
#include <iostream>

uint32_t reverseBits(uint32_t number) {
  uint32_t solve = 0;
  int position = 31;

  while(number != 0) {
    if(number % 2)
      solve += (1 << position) ;
    position--;
    number /= 2;
  }

  return solve;
}
int main() {
    uint32_t number;
    std::cin >> number;
    std::cout << reverseBits(number) << std::endl;
    return 0;
}
