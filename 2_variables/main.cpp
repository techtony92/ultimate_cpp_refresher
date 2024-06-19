#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int temp = b;
    b = a;
    a = temp;
    std::cout << a;
    std::cout << b;
    return 0;
}