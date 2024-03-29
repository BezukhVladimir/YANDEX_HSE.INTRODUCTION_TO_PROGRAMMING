//Выведите все четные элементы массива.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//
//Формат выходных данных
//Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
//
//Sample Input:
//7
//1 2 2 3 3 3 4
//
//Sample Output:
//2 2 4

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; ++i) {
        cin >> a[i];

        if (a[i] % 2 == 0)
            cout << a[i] << ' ';
    }
}