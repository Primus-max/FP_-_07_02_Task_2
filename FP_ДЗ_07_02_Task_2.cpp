//// Написать программу, которая выводит на экран шахматную
//// доску с заданным размером клеточки.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   

    int cellSize = 0, chessSize = 8;
    char symbolWhite = '*', symbolBlack = '-';

    cout << "Введи размер клетки шахматной доски : ";
    cin >> cellSize;

    // Использовал метод string(), но в репозитории в первом комите есть базовая реализация, с добавлением доп. двух циклов

    for (int x = 1; x <= chessSize; x++)
    {
        for (int y = 1; y <= chessSize; y++)
        {
            string whiteOrBlack = (x + y) % 2 == 0 
                ? string(cellSize, symbolWhite)  // Одна из перегрузок метода string, параметрами принимает, что и сколько раз повторить
                : string(cellSize, symbolBlack);

            cout << whiteOrBlack;
        }
        cout << endl;
    }

}

