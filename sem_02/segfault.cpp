#include <vector>
#include <iostream>
int main() {
    std::vector<int> a(10);
    a[50000] = 1;
    std::cout << a[50000];
}