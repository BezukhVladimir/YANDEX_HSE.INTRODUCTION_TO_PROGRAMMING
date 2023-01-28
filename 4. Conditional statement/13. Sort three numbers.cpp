//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//Вводятся три числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//1
//2
//1
//
//Sample Output:
//1 1 2

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >>  B >>  C;

    if (A > B)
        swap(A, B);
    if (B > C)
        swap(B, C);
    if (A > B)
        swap(A, B);

    cout << A << ' ' << B << ' ' << C;
}