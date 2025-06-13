#include <iostream>
#include <stdexcept>

class Calculator {
public:
  int add(int a, int b) {
    if (static_cast<long long>(a) + b > 1000) {
      throw std::overflow_error("Sum exceeds 1000");
    }
    return a + b;
  }
};

int main() {
  Calculator calc;
  try {
    std::cout << calc.add(500, 600) << std::endl;
  } catch (const std::overflow_error &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}