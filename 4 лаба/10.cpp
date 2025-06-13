#include <iostream>
#include <stdexcept>

int main() {
  auto checkZero = [](int x) {
    if (x == 0) {
      throw std::runtime_error("Number is zero");
    }
  };

  try {
    checkZero(0);
  } catch (const std::exception &e) {
    std::cerr << "Caught: " << e.what() << std::endl;
  }

  return 0;
}