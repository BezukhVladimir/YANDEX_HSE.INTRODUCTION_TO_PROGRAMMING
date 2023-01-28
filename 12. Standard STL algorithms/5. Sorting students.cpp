//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
//
//Выходные данные
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//
//Sample Output:
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

struct Student
{
    int inf;
    int math;
    int phys;
    string lastName;
    string firstName;
};

bool function(const Student& first,
              const Student& second) {
    return (first.math + first.phys + first.inf) >
           (second.math + second.phys + second.inf)
           ? true : false;
}

int main()
{
    int NUMBER;
    cin >> NUMBER;

    vector<Student> data(NUMBER);
    for (int i = 0; i < NUMBER; ++i)
        cin >> data[i].firstName >> data[i].lastName
            >> data[i].math >> data[i].phys >> data[i].inf;

    stable_sort(data.begin(), data.end(), function);
    for (int i = 0; i < NUMBER; ++i)
        cout << data[i].firstName << ' '
             << data[i].lastName << endl;
}