#include <tuple>
#include <iostream>

void func(auto... x) {
  std::cout<< "Expand into a function:\n";
  std::cout<< "  "<< int...<< ": "<< x<< "\n" ...;
}

int main() {
  auto tup = std::make_tuple(1, "Two", 3.3);

  // Pack expand directly into a cout.
  std::cout<< "Direct expand:\n";
  std::cout<< "  "<< int...<<": "<< tup.[:]<< "\n" ...;

  // Pack expand into another function's arguments.
  func(tup.[:] ...);
}