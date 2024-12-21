#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic usage of std::vector<bool>
  std::vector<bool> boolVector(10);
  // Accessing elements is unusual
  // boolVector[0] = true;

  // Better alternatives
  std::vector<char> charVector(10);
  // std::vector<char> can represent booleans using 0 and 1
  charVector[0] = 1;
  charVector[1] = 0;

  std::bitset<10> bitsetVector;
  bitsetVector[0] = 1;
  std::cout << bitsetVector << std::endl;

  return 0;
}
