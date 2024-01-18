//Возводить в степень можно гораздо быстрее, чем за n умножений! Для этого нужно воспользоваться следующими рекуррентными соотношениями:
//
//an = (a2)^(n/2)  при четном n,
//an = a×a^(n−1) при нечетном n.
//
//Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.
//
//Формат входных данных
//Вводятся действительное число a и целое неотрицательное число n.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input 1:
//2.0
//1
//
//Sample Output 1:
//2
//
//Sample Input 2:
//2
//2
//
//Sample Output 2:
//4

#include <iostream>

using namespace std;

double power(const double &a,
             const int &n) {
    if (!n)
        return 1;

    if (n % 2)
        return a * power(a, n - 1);

    return power(a * a, n / 2);
}

int main()
{
    int P;
    double N;
    cin >> N >> P;

    cout << power(N, P);
}