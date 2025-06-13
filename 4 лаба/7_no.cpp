#include <iostream>
#include <stdexcept>

class Resource {
public:
  ~Resource() {
    std::cerr << "Destructor throwing an exception" << std::endl;
    throw std::runtime_error("Error in destructor");
  }
};

int main() {
  try {
    Resource res;
  } catch (const std::exception &e) {
    std::cerr << "Caught: " << e.what() << std::endl;
  }
  return 0;
}