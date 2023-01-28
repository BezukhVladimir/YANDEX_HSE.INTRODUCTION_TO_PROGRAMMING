//Даны два списка чисел, которые могут содержать до 100000 чисел каждый.  Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
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
//2 3

#include <set>
#include <iostream>

using namespace std;

int main()
{
    set <int> simpleSet, resultSet;
    int firstListSize, secondListSize, amount, result = 0;

    cin >> firstListSize;
    while (firstListSize-- && cin >> amount)
        simpleSet.insert(amount);

    cin >> secondListSize;
    while (secondListSize-- && cin >> amount)
        if (!simpleSet.insert(amount).second)
            resultSet.insert(amount);

    for (const auto &value: resultSet)
        cout << value << ' ';
}