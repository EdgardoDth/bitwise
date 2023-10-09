/*
  Problem:
  Given two integers a and b, return the sum of the two integers without using
  the operators + and -.
  Solution:
  Using the algorithm of Two's complement we can easily use AND, XOR and OR
  operators to represent a integer sum.
*/
#include <iostream>

int getSum(int a, int b) {
    int result = 0;
    bool carry = false;
    for(int i = 0; i < 32; ++i) {
        bool aLogic = a & (1 << i);
        bool bLogic = b & (1 << i);
        bool currentValue = aLogic ^ bLogic;
        if(carry) {
            bool aux = carry;
            carry = carry & currentValue || (aLogic & bLogic);
            currentValue = currentValue ^ aux;
        } else {
            carry = aLogic & bLogic;
        }
        result = result | (currentValue << i);
    }
    return  result;
}

int main() {
    std::cout << getSum(20, 30) << std::endl;
    std::cout << getSum(1, 2) << std::endl;
    std::cout << getSum(2, -2) << std::endl;
    std::cout << getSum(2, 3) << std::endl;
    std::cout << getSum(3, 5) << std::endl;
    return 0;
}
