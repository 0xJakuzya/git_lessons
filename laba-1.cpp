#include <iostream>
#include <math.h>
    
    using namespace std;
    int main()
    {
        setlocale(0, ""); //эта команда устанавливает локаль консоли, чтобы программа могла корректно выводить символы кириллицы.
        double x, y, r, z; // задаем x y r z
        std::cout << "Enter x:"; // запрашиваем у пользователя х
        std::cin >> (x);
        r = log10(1 + pow(x, 2)); // формула для r по 12 варианту, считаем его
        z = acos(exp(-x)) * ((exp(-x)) * (1 + pow(sin(x), 2))); // тут считаем z по варианту
        y = (r / z); // формула для y, зависимость от r и z
        std::cout << (y);
        return 0; // выводим y
    }
