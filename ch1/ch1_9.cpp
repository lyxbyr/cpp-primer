//
// Created by lyx on 10/21/21.
//

#include <iostream>

int main () {
  int i = 50, sum = 0;
  while (i <= 100) {
    sum += i;
    ++i;
  }
  std::cout << sum << std::endl;
  return 0;
}