//Дано нечетное число n, не превосходящее 15. Создайте двумерный массив из n×n элементов, заполнив его символами "." (каждый элемент массива является строкой из одного символа). Затем заполните символами "*" среднюю строку массива, средний столбец массива, главную диагональ и побочную диагональ. В результате "*" в массиве должны образовывать изображение звездочки. Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//5
//
//Sample Output:
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == i ||
                j == N / 2 ||
                i == N / 2 ||
                j == N - i - 1) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }

        cout << endl;
    }
}