#include <iostream> 
#define _USE_MATH_DEFINES 10

#include <math.h>
#include <iomanip>
using namespace std;
double x, y, r, t, u, m; // задаем все переменные
int main()
{
    setlocale(0, "ru");
    int k; // задаем переменную k
    cout << " R: "; // вводим радиус
    cin >> u; 
    r = fabs(u); // вычисляем модуль радиуса
    cout << " x: ";// вводим x
    cin >> x;
    if (x <= (-2 * r)) //если число меньше -2r, то y = r
        y = r;
    if (x < -r && x > -3 * r)
        y = ((x + 2) / 4); // если x меньше -r и больше -3r, то y = ((x + 2) / 4)
    if (x >= -r && x < 0)
        y = r*sin(M_PI*(x/(2*r)))+r; // если x больше -r и меньше 0, то y = r*sin(M_PI*(x/(2r)) + r
    if (x >= 0 && x <= r)
        y = (sqrt(r * r - x * x)); // если x больше 0 и меньше r, то y = sqrt(r * r - x * x)
    if (x > r)
        y = (-(x / 2)); // ну и если x больше r, то y = -(x / 2)
    cout << setw(5) << x << setprecision(4) << "  |  " << y << endl << setw(5) << "---------------" << endl; // выводим результат условий
    cout << "Введите Диапазон: "; 
    cin >> t; 
    cout << "ШАГ: "; // тут мы задаем шаг и диапазон, а дальше выводим все точки в виде таблицы в другой части кода
    cin >> m;
    cout << setw(5) << "x      |     y" << endl << "---------------" << endl;
    for (x = -t; x <= t; x+= m) //выводим таблицу всех точек 
    {
        if (x <= (-2 * r))
            y = r;
        if (x < -r && x > -3 * r)
            y = ((x + 2) / 4);
        if (x >= -r && x < 0)
            y = r * sin(M_PI * (x / (2 * r))) + r; 
        if (x >= 0 && x <= r)
            y = (sqrt(r * r - x * x));
        if (x > r)
            y = (-x + r );
        cout << setw(5) << x << setprecision(4) << "  |  " << y << endl << setw(5) << "---------------" << endl;
    }               
}