#include <iostream>
#include <new>

int main() {
  try {
    size_t veryBigSize = static_cast<size_t>(-1) / 2;
    int *arr = new int[veryBigSize];
    delete[] arr;
  } catch (const std::bad_alloc &e) {
    std::cerr << "Ошибка выделения памяти: " << e.what() << std::endl;
  }
  return 0;
}