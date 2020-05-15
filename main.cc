#include <string>

#include "hello.h"

int main(int c, char** vs) {
  auto name = std::string("bazel");
  if (c >= 2) {
    name = vs[1];
  }

  Greet(name);

  return EXIT_SUCCESS;
}