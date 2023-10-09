/*
  Problem:
  Given a non-empty array of integers nums, every element appears twice
  except for one. Find that single one.

  You must implement a solution with a linear runtime complexity and use
  only constant extra space.

  Solution:
  For each element of the vector(array) we can do a XOR operator between every
  element.
  We know that the output of the XOR gate is 1 if both bits are different.
  In this case, if the number is already on the vector, the return will be 0, but
  if not, the resulst will be the single number.
*/
#include <iostream>
#include <vector>

int singleNums(std::vector<int> & nums) {
    int res = 0;
    for(auto i: nums) res ^= i;
    return res;
}

int main() {
    std::vector<int> v = {4, 2, 1, 2, 1};
    std::cout << singleNums(v) << std::endl;
    return 0;
}
