//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//
//Формат входных данных
//Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//4 5
//
//Sample Output:
//1   2   3   4   5
//14  15  16  17   6
//13  20  19  18   7
//12  11  10   9   8

#include <iostream>

using namespace std;

int main()
{
    int N, M, count = 0, k = 0, t = 1;
    cin >> N >> M;

    int a[N][M];
    while (count < N * M) {
        ++k;

        for (int i = k - 1; i < M - k + 1; ++i) {
            a[k - 1][i] = t++;
            ++count;
        }

        for (int i = k; i < N - k + 1; ++i) {
            a[i][M - k] = t++;
            count++;
        }

        if (count < N * M) {
            for (int i = M - k - 1; i >= k - 1; --i) {
                a[N - k][i] = t++;
                ++count;
            }
        }

        if (count < N * M) {
            for (int i = N - k - 1; i >= k; --i) {
                a[i][k - 1] = t++;
                ++count;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j)
            printf("%4d", a[i][j]);

        cout << '\n';
    }
}