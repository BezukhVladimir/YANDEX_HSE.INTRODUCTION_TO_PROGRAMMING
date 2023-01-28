//Даны длины сторон треугольника. Вычислите площадь треугольника.
//
//Формат входных данных
//Вводятся три положительных числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//3
//4
//5
//
//Sample Output:
//6

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double A, B, C, p;
    cin >> A >> B >> C;

    p = (A + B + C) / 2.0;
    cout << sqrt(p * (p - A) * (p - B) * (p - C));
}