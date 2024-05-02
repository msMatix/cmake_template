#include "foo.h"
#include <iostream>

Foo::Foo() {
  // Constructor implementation
}

Foo::~Foo() {
  // Destructor implementation
}

void Foo::doSomething() { std::cout << "Hello World By Foo!" << std::endl; }

int Foo::add(int a, int b) { return a + b; }
