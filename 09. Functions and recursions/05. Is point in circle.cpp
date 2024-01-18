//Даны пять действительных чисел: x, y, xc, yc, r. Проверьте, принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r. Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), возвращающую True, если точка принадлежит кругу и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInCircle не должна содержать инструкцию if.
//
//Формат входных данных
//Вводятся пять действительных чисел.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//0.5
//0.5
//0
//0
//1
//
//Sample Output 1:
//YES
//
//Sample Input 2:
//0.5
//0.5
//1
//1
//0.1
//
//Sample Output 2:
//NO

#include <iostream>

using namespace std;

double isPointInCircle(const double &X,
                       const double &Y,
                       const double &X0,
                       const double &Y0,
                       const double &R) {
    return (X - X0) * (X - X0)
         + (Y - Y0) * (Y - Y0) <= R * R;
}

int main()
{
    double X, Y, X0, Y0, R;
    cin >> X >> Y >> X0 >> Y0 >> R;

    cout << ((isPointInCircle(X, Y, X0, Y0, R))
              ? "YES" : "NO");
}