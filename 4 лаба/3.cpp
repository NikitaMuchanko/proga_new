#include <cmath>
#include <iostream>
#include <stdexcept>

class NegativeNumberException : public std::exception {
public:
  const char *what() const noexcept override {
    return "Negative number passed to sqrt";
  }
};

double sqrt(double x) {
  if (x < 0) {
    throw NegativeNumberException();
  }
  return std::sqrt(x);
}

int main() {
  try {
    std::cout << sqrt(-1) << std::endl;
  } catch (const NegativeNumberException &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}