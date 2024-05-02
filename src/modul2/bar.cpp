#include "bar.h"
#include <iostream>

Bar::Bar() {
  // Constructor implementation
}

Bar::~Bar() {
  // Destructor implementation
}

void Bar::doSomething() { std::cout << "Hello World By Bar!" << std::endl; }

std::string Bar::echo(const std::string &message) { return message; }
