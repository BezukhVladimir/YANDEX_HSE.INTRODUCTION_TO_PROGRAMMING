//Сумма цифр трехзначного числа
//Дано целое трехзначное число. Найдите сумму его цифр.
//
//Формат входных данных
//На вход дается число от 100 до 999.
//
//Формат выходных данных
//Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//476
//
//Sample Output:
//17

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    cout << N % 10 + N / 10 % 10 + N / 100;
}