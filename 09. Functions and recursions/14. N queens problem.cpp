//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Подсказка
//Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать. Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//
//Sample Input:
//8
//
//Sample Output:
//92

#include <iostream>

using namespace std;

int board[0];

bool checkPosition(const int &abscissa,
                   const int &ordinate) {
    int index = 0;

    while ((index < abscissa) &&
           (ordinate != board[index]) &&
           ((abscissa - index) != abs(ordinate - board[index])))
        ++index;

    return (abscissa == index);
}

int backtracking(const int &dimensionally,
                 const int &abscissa,
                 const int &ordinate) {
    if (abscissa == dimensionally)
        return 1;
    else {
        if (ordinate < dimensionally) {
            int result = 0;

            if (checkPosition(abscissa, ordinate)) {
                board[abscissa] = ordinate;
                result = backtracking(dimensionally, abscissa + 1, 0);
            }

            return result + backtracking(dimensionally, abscissa, ordinate + 1);
        } else
            return 0;
    }
}

int main()
{
    int dimensionally;
    cin >> dimensionally;

    board[dimensionally] = {0};
    cout << backtracking(dimensionally, 0, 0);
}