//
// Created by lyx on 10/21/21.
//

#include <iostream>

int main () {
  int sum = 0;
  for (int val; std::cin >> val; sum += val) {
    std::cout << sum << std::endl;
  }

  return 0;
}