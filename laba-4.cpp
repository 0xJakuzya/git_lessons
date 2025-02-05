 #include <iostream>
    #define _USE_MATH_DEFINES
    #include <math.h>

    using namespace std;

    double Lab(double x,double y) //вычисляем функции y = f(x)
    { 
        return (((x + 2 * pow(sin(y / M_PI), 2)) * (pow((exp(x) + exp(-(y))),2)))) / ((sin(x / M_PI) + y) * sqrt(3 * (x)+2 * y)); 
    }

    int main()
    {

            double a, b, a1, b2, b1, a2, T1, T2; // вводим переменные
            cout << "a=";
            cin >> a;
            cout << "b=";
            cin >> b;
            a1 = sqrt(a) + sqrt(b);
            b1 = pow(a,2) + b;
            a2 = (3 * a) + pow(b, 2); 
            b2 = sqrt(a) + b;
            T1 = Lab(a1, b1); 
            T2 = Lab(a2, b2);
            cout << T1 + T2;

        return 0;
    }