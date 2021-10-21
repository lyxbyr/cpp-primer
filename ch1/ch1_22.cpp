//
// Created by lyx on 10/21/21.
//

#include <iostream>
#include "Sales_item.h"
int main () {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (trans.isbn() == total.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "no data" << std::endl;
    return -1;
  }
  return 0;
}