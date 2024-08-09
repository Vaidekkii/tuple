#include <iostream>
#include <tuple>
int main() {
    // Creating a tuple
    std::tuple<int, double, std::string> myTuple(1, 4.5, "Hello");
   // Accessing elements
    std::cout << std::get<0>(myTuple) << std::endl;  // Output: 1
    std::cout << std::get<2>(myTuple) << std::endl;  // Output: Hello
    // Tuple unpacking
    int a;
    double b;
    std::string c;
    std::tie(a, b, c) = myTuple;
    std::cout << a << ", " << b << ", " << c << std::endl;  // Output: 1, 4.5, Hello
     return 0;
}
