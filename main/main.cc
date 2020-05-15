#include <string>

#include "main/hello.h"
#include "time/time.h"

int main(int c, char** vs) {
  auto name = std::string("bazel");
  if (c >= 2) {
    name = vs[1];
  }

  Greet(name);
  PrintLocalTime();

  return EXIT_SUCCESS;
}