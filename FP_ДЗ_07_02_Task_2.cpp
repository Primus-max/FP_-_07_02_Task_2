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

    for (int x = 1; x <= chessSize; x++)
    {   
        for (int y = 1; y <= chessSize; y++)
        {   
            int XY = x + y;

            if (XY % 2 == 0 )
            {
                for (int cell = 0; cell < cellSize; cell++)                
                    cout << symbolWhite;
            }
            else 
            {
                for (int cell = 0; cell < cellSize; cell++)                    
                    cout << symbolBlack;
            }
                
        }     

        cout << endl;
    }
}

