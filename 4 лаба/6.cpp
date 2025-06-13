#include <iostream>
#include <stdexcept>

class Rectangle {
public:
  Rectangle(int width, int height) {
    if (width <= 0 || height <= 0) {
      throw std::invalid_argument("Width and height must be positive");
    }
  }
};

int main() {
  try {
    Rectangle rect(-10, 20);
  } catch (const std::invalid_argument &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}