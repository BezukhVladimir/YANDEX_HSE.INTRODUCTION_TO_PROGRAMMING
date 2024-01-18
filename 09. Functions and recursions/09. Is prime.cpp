//Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое и NO, если число составное.
//Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и False для составных чисел. Количество операций в программе должно быть пропорционально корню из n.
//
//Формат входных данных
//Вводится натуральное число.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//2
//
//Sample Output 1:
//YES
//
//Sample Input 2:
//4
//
//Sample Output 2:
//NO

#include <cmath>
#include <string>
#include <iostream>

using namespace std;

string isPrime(const int &a) {
    for (int i = 2; i <= sqrt(a); ++i)
        if (a % i == 0)
            return "NO";

    return "YES";
}

int main()
{
    int N;
    cin >> N;

    cout << isPrime(N);
}