#include "modul1/foo.h"
#include "modul2/bar.h"
#include <etl/vector.h>
#include <iostream>

int main() {
  Foo foo;
  foo.doSomething();

  Bar bar;
  bar.doSomething();

  std::cout << "Hello World!" << std::endl;

  etl::vector<int, 10> myVector{};
  return 0;
}
