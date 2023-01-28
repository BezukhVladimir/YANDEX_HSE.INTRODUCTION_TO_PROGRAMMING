//Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.
//
//Sample Input:
//3
//0 1 2
//1 2 3
//2 3 4
//
//Sample Output:
//YES

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N][N];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> a[i][j];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (a[i][j] != a[j][i]) {
                cout << "NO";
                return 0;
            }

    cout << "YES";
}