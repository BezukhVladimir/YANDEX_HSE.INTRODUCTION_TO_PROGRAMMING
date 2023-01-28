//Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.
//
//Входные данные
//Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.
//
//Выходные данные
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//3
//Hello Hi
//Bye Goodbye
//List Array
//Goodbye
//
//Sample Output:
//Bye

#include <map>
#include <iostream>

using namespace std;

int main()
{
    int NUMBER;
    cin >> NUMBER;

    map<string, string> vocabulary;
    for (int i = 0; i < NUMBER; ++i) {
        string first, second;
        cin >> first >> second;

        vocabulary[first] = second;
        vocabulary[second] = first;
    }

    string word;
    cin >> word;

    cout << vocabulary[word];
}