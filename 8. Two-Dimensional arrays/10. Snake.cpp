//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.
//
//Формат входных данных
//Вводятся два числа n и m, каждое из которых не превышает 30.
//
//Формат выходных данных
//Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//3 5
//
//Sample Output:
//1   2   3   4   5
//10   9   8   7   6
//11  12  13  14  15

#include <iostream>

using namespace std;

int main()
{
    int N, M, count = 1;
    cin >> N >> M;

    int a[N][M];
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0)
            for (int j = 0; j < M; ++j) {
                a[i][j] = count;
                ++count;
            }
        else
            for (int j = M - 1; j >= 0; --j) {
                a[i][j] = count;
                ++count;
            }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j)
            printf("%4d", a[i][j]);

        printf("\n");
    }
}