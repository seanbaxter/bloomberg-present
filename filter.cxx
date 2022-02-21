#include <iostream>

template<typename... Ts>
void f(const char* msg, Ts... x) {
  std::cout<< msg;
  std::cout<< x<<" " ...;
  std::cout<< "\n";
}

template<typename... Ts>
void func(Ts... x) {
  f("The doubles: ", if Ts == double => x ...);
  f("The ints:    ", if Ts == int => x ...);
}

int main() {
  func(1, 2.2, 3.3, 4, 5, 6.6);
}

