#include <iostream>

int f(int x) {
    std::cout << x;
    return x;
}
int g(int x) {
    std::cout << x;
    return x;
}
int h(int x) {
    std::cout << x;
    return x;
}

int main() {
    int x = 1, y = 2, z = 3;
    std::cout << f(x) + g(y) * h(z);
    return 0;
}
