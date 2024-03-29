//Напишите функцию fib(n), которая по данному целому положительному n возвращает n-e число Фибоначчи. В этой задаче нельзя использовать циклы - используйте рекурсию.
//Первое и второе числа Фибоначчи равны 1, а каждое следующее равно сумме двух предыдущих.
//
//Формат входных данных
//Вводится целое число.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//1
//
//Sample Output:
//1

#include <iostream>

using namespace std;

int fibonacci(const int &n) {
    if (n < 2)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main ()
{
    int N;
    cin >> N;

    cout << fibonacci(N);
}