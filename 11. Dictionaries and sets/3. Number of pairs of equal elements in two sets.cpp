//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//Выведите ответ на задачу.
//
//Sample Input:
//3
//1 3 2
//3
//4 3 2
//
//Sample Output:
//2

#include <set>
#include <iostream>

using namespace std;

int main()
{
    set <int> simpleSet;
    int firstListSize, secondListSize, amount, result = 0;

    cin >> firstListSize;
    while (firstListSize-- && cin >> amount)
        simpleSet.insert(amount);

    cin >> secondListSize;
    while (secondListSize-- && cin >> amount)
        if (!simpleSet.insert(amount).second)
            ++result;

    cout << result;
}