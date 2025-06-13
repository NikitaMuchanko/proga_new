#include <iostream>
#include <stdexcept>

class NegativeNumberException : public std::exception {
public:
  const char *what() const noexcept override {
    return "Negative number exception";
  }
};

void processNumber(int x) {
  if (x < 0) {
    throw NegativeNumberException();
  } else if (x > 100) {
    throw std::out_of_range("Number is greater than 100");
  }
}

int main() {
  try {
    processNumber(-5);
  } catch (const NegativeNumberException &e) {
    std::cerr << e.what() << std::endl;
  } catch (const std::out_of_range &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}