 #include "iostream"
    #include "cmath"
    using namespace std;

    int main()
    {
        // вводим переменные
        double d, x, y, q;
        int n;
        // вводим x
        cout << "x=";
        cin >> x;
        // вводим n
        cout << "n=";
        cin >> n;
        // инициализируем i
        int i = 1;
        while (i <= n)
        {
            // вычисляем d
            d = pow((x + 1), i);
            // вычисляем q
            q = sqrt(q + 2);
            // вычисляем y
            y += d / q;
            // инкрементируем i
            i++;
        }

        // выводим y
        cout << "y = " << y;
        return 0;
    }
