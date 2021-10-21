//
// Created by lyx on 10/21/21.
//

#include <iostream>

using namespace std;

int main () {
  std::cout << "please input two integer:\n";
  int low = 0, hi = 0;
  cin >> low >> hi;
  if (low > hi) {
    int tmp = low;
    low = hi;
    hi = tmp;
  }
  for (int i = low; i < hi; ++i) {
    std::cout << i << std::endl;
  }
  return 0;
}