#include <string>
int main() {
    int x = 1;
    std::string s = "aboba";
    (1 < 2 ? x : s) = 6;
    return 0;
}