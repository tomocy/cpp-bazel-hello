#include "time/time.h"

#include <ctime>
#include <iostream>

void PrintLocalTime() {
  auto time = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&time));
}