//Дано натуральное число n > 1. Выведите его наименьший делитель, отличный от 1.
//Решение оформите в виде функции MinDivisor(n). Количество операций в программе должно быть пропорционально корню из n.
//Указание. Если у числа n нет делителя, меньшего n , то число n — простое и ответом будет само число n.
//
//Формат входных данных
//Вводится натуральное число.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//4
//
//Sample Output 1:
//2
//
//Sample Input 2:
//5
//
//Sample Output 2:
//5

#include <cmath>
#include <iostream>

using namespace std;

int minDivisor(const int &a) {
    for (int i = 2; i <= sqrt(a); ++i)
        if (a % i == 0)
            return i;

    return a;
}

int main()
{
    int N;
    cin >> N;

    cout << minDivisor(N);
}