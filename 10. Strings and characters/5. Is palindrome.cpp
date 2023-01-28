//По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//kayak
//
//Sample Output:
//yes

#include <cstring>
#include <iostream>

using namespace std;

string isPalindrome(const string &str) {
    int l = str.length(),
        t = l / 2;

    for (int i = 0; i < t; ++i)
        if (str[i] != str[l - i - 1])
            return "no";

    return "yes";
}

int main()
{
    string str;
    getline(cin, str);

    cout << isPalindrome(str);
}