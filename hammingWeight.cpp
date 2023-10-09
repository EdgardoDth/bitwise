/*
  Problem:
  Write a function that takes the binary representation of an
  unsigned integer and returns the number of '1' bits it has (also known as
  the Hamming weight).

  Solution:
  Using the left shift operator to move throught every bit and check if there is
  a 1 or 0.
  Starting from the least significant bit(position 0) to the most significant
  bit(pisition 31)

  With a for loop, check every bit from 0 to 31 if there is a 0 on the current
  position, this range is selected because we are checking a 32 unsigned integer.

  Return the number of '1' bits found.
*/
#include <iostream>

int hammingWeight(uint32_t number) {
  int count = 0;
  for(int i = 0; i < 32; ++i)
    if(number & (1 << i))
      count++;
  return count;
}

int main() {
  uint32_t number;
  std::cin >> number;
  std::cout << hammingWeight(number) << std::endl;

  return 0;
}
