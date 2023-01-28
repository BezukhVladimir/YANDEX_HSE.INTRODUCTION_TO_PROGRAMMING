//Отсортируйте массив.
//
//Входные данные
//Первая строка входных данных содержит количество элементов в массиве N ≤ 105. Далее идет N целых чисел, не превосходящих по абсолютной величине 109.
//
//Выходные данные
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//5
//5 4 3 2 1
//
//Sample Output:
//1 2 3 4 5

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    for (const auto &out : v)
        cout << out << ' ';
}