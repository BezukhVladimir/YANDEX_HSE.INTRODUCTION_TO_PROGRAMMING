//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//Программа получает на вход набор точек на плоскости. Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.
//
//Выходные данные
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//2
//1 2
//2 3
//
//Sample Output:
//1 2
//2 3

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<double, pair<int, int>>> amounts;

    int NUMBER;
    cin >> NUMBER;

    for (int i = 0; i < NUMBER; ++i) {
        int x, y;
        cin >> x >> y;

        amounts.push_back({sqrt(x * x + y * y), {x, y}});
    }

    sort(amounts.begin(), amounts.end());

    for (const auto &pair: amounts)
        cout << pair.second.first << ' '
             << pair.second.second << endl;
}