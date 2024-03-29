//Проверьте, принадлежит ли точка данной закрашенной области:
//
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInArea и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
//
//Формат входных данных
//Вводятся два действительных числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//-4
//-4
//
//Sample Output 1:
//NO
//
//Sample Input 2:
//-4
//-3
//
//Sample Output 2:
//NO

#include <iostream>

using namespace std;

double isPointInArea(const double &X,
                     const double &Y) {
    return Y >= 2 * X + 2 && Y >= -X && (X + 1) * (X + 1) + (Y - 1) * (Y - 1) <= 4
        || Y <= 2 * X + 2 && Y <= -X && (X + 1) * (X + 1) + (Y - 1) * (Y - 1) >= 4;
}

int main()
{
    double X, Y;
    cin >> X >> Y;

    cout << ((isPointInArea(X, Y))
              ? "YES" : "NO");
}