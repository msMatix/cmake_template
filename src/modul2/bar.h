#pragma once

#include <string>

class Bar {
public:
  Bar();
  ~Bar();

  void doSomething();
  std::string echo(const std::string &message);
};
