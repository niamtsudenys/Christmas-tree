#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;          //  Elka
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
void SetColor(int text)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)text);
}
int main()
{
	SetColor(0);
	int height;
	cin >> height;
	height = abs(height);
	cout << endl << endl;
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < i + 3; ++j)
		{
			for (int m = 0; m <= height - j; ++m)
			{
				cout << " ";
			}
			for (int m = 0; m <= 2 * j; ++m)
			{
				if (m % 2 != 0)
				{
					SetColor(9);
					cout << "*";
				}
				else if (j % 2 != 0)
				{
					SetColor(14);
					cout << "0";
				}
				else
				{
					SetColor(10);
					cout << "A";
				}
				
			}
			cout << endl;
		}
	}
	for (int j = 0; j <= height / 2; j++)
	{
		for (int m = 0; m < (height +3) / 2; ++m)
		{
			cout << " ";
		}
		if (height % 2 != 0)
		{
			for (int m = 0; m < height; m++)
			{
				SetColor(6);
				cout << "#";
			}
		}
		else
		{
			for (int m = 0; m <= height; m++)
			{
				SetColor(6);
				cout << "#";
			}
		}
		cout << endl;
	}
	cout << endl << endl << endl;
	SetColor(0);
	return 0;
}