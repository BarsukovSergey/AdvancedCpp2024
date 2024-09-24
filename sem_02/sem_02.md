# 2. Expressions, operators, CE, RE, UB

В С++ есть много разных операторов, большинство (или все) из них вам уже знакомы:

* `::` - Scope resolution
* `+ - * / %` - арифметические
* `++ --` - префиксные и постфиксные инкремент и декремент
* `&& || !` - логические
* `& | ^ ~` - битовые
* `< > <= >=` - порядок
* `== !=` - эквивалентность
* `= += -= /= *= %= >>= <<=` - присваивания и составные присваивания
* и разные другие, [полный список](https://en.cppreference.com/w/cpp/language/operator_precedence)

Вообще говоря, операторы - это синтаксический сахар, когда (для нетривиальных типов) вы пишете `a + b`, то это просто превращается в `operator+(a, b)`. Сделано это, понятное дело, для удобства, чтобы не писать для своих типов странные вещи типа `plus(a, plus(b, (plus(c, d))))`.
Но есть и минусы: из-за такой записи становится неочевидным приоритет операторов, поэтому существует понятие [C++ Operator Precedence](https://en.cppreference.com/w/cpp/language/operator_precedence)

код `02-table`:
```c++
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

```
