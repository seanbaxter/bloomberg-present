#include <iostream>
#include <map>

int main() {
  auto f = [](auto... x) {
    std::cout<< x<<" "...;
    std::cout<< "\n";
  };

  // Call the lambda with the first five squared integers.
  // Use argument-for inside a function argument list.
  f(for i : 5 => i * i);

  // Create a map with the first five squared integers.
  // Use argument-for inside an initializer-list.
  std::map map {
    for i : 5 => std::make_pair(i, i * i)
  };
  std::cout<< map[:].first<< "->"<< map[:].second<< "\n" ...;
}
