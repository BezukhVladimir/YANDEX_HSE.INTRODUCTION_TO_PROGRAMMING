//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//Выведите два числа: номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве. Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//
//Sample Output:
//1 2

#include <iostream>

using namespace std;

int main()
{
    int N, M, Y, X, max = -2147483648;
    cin >> N >> M;

    int a[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> a[i][j];

            if (max < a[i][j]) {
                max = a[i][j];
                Y = i;
                X = j;
            }
        }
    }

    cout << Y << ' ' << X;
}