//Напишите функцию min(a, b), вычисляющую минимум двух чисел. Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. Считайте четыре целых числа и выведите их минимум.
//
//Формат входных данных
//Вводятся четыре целых числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//4
//5
//6
//7
//
//Sample Output:
//4

#include <iostream>

using namespace std;

int min2(const int &a, const int &b) {
    return ((a < b)
             ? a : b);
}

int min4(const int &a, const int &b,
         const int &c, const int &d) {
    return ((min2(a, b) < min2(c, d))
             ? min2(a, b) : min2(c,d));
}

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    cout << min4(A, B, C, D);
}