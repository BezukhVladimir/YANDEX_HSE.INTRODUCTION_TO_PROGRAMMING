//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//Everyone of us has all we need
//
//Sample Output:
//Everyone

#include <sstream>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    string str, word, result;

    getline(cin, str);
    stringstream ss(str);
    while (ss >> word)
        if (word.length() > max) {
            max = word.length();
            result = word;
        }

    cout << result;
}