//Даны четыре действительных числа: x1, y1, x2, y2. Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2). Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//Вводятся четыре действительных числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//0
//0
//1
//1
//
//Sample Output:
//1.41421

#include <cmath>
#include <iostream>

using namespace std;

double distance(const double &X0,
                const double &Y0,
                const double &X1,
                const double &Y1) {
    return sqrt((X0 - X1) * (X0 - X1)
              + (Y0 - Y1) * (Y0 - Y1));
}

int main()
{
    double X0, Y0, X1, Y1;
    cin >> X0 >> Y0 >> X1 >> Y1;

    cout << distance(X0, Y0, X1, Y1);
}