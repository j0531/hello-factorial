/**
 * test functions for factorial
 **/

#include "factorial.h"
#include <cassert>
#include <iostream>

using namespace std;

void test01() {
  assert(fact(1) == 1);
  assert(fact(3) == 6);
}

void test02() {
  assert(fact(-1) == 1);
  assert(fact(5) == 120);
}

void test03() {
  assert(fact(1) == 1);
  assert(fact(35) == -1);
}

int main() {
  test01();
  test02();
  test03();
  memoryLeakFunction();

  cout << "Done." << endl;
  return 0;
}
