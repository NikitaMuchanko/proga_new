#include <iostream>

void riskyFunction() {
  throw 42; // Пример произвольного исключения
}

int main() {
  try {
    riskyFunction();
  } catch (...) {
    std::cerr << "Поймано неизвестное исключение!" << std::endl;
  }
  return 0;
}