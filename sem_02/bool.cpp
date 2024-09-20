#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int table[4] = {1, 2, 3, 4};
bool exists_in_table(int v)
{
    // return true in one of the first 4 iterations or UB due to out-of-bounds access
    for (int i = 0; i <= 4; i++)
        if (table[i] == v)
            return true;
    return false;
}


int main() {
    std::cout << exists_in_table(5);
    return 0;
}
