

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int getValue()
{
	while (true)
	{
		cout << "Please input words number";
		cout << '\n';
		int a;
		cin >> a;
		cout << '\n';

		if (cin.fail())
		{
			cin.clear(); // 
			cin.ignore(32767, '\n');
		}
		else return a;

	}
}
void words1(string A[], int longs)
{
	int b;
	string admittance;
	cout << '\n';
	cout << "Please input start";
	cout << '\n';
	cin >> admittance;
	cout << '\n';
	while ((admittance != "no") || (admittance != "NO") || (admittance != "No") || (admittance != "nO"))
	{
		cout << '\n';
		b = getValue();
		cout << '\n';
		if (b > longs)
		{
			cout << "Warning.This number not avalible in lines.Please input new number";
			continue;
		}
		cout << "Your  request word is " << '\t' << A[b];
		cout << '\n';
		cout << "If your want continue please input Yes. If your want ending program input No";
		cout << '\n';
		cin >> admittance;
		if ((admittance == "no") || (admittance == "NO") || (admittance == "No") || (admittance == "nO"))
		{
			break;
		}
		cout << '\n';
	}



}

void main()
{
	string input;
	string stroki;
	int i = 1;
	int longs = 0;
	string input_2;
	string* words = new string[1000];

	while (input != "yes")
	{
		cin >> input;
		if (input == "yes")
		{
			break;
		}
		if (i % 2 == 0)
		{
			stroki = stroki + " " + "+" + input;
		}
		else
		{
			stroki = stroki + " " + input + input;
		}
		words[i] = input;
		i++;
		longs++;
	}
	cout << '\n';
	cout << stroki;


	for (int j = 0; j < longs + 1; j++)
	{
		for (int g = 0; g < j; g++)
		{
			input_2 = words[j];
			cout << input_2;
		}
		cout << '\n';
	}

	words1(words, longs);
	delete[] words;
}



/* Задание 2
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
using namespace  std;
HANDLE hConsole;
void funtion(int* A[], int C, int R, int B[])
{
	int g = 0;
	int var = 0;
	for (int j = C - 1; j > C / 2 - 1; j--)
	{
		for (int i = var; i < R - g; i++)
		{
			if (A[i][j] > B[1])
			{
				B[1] = A[i][j];
			}
		}
		g++;
		var++;
	}
	g = 0;
	var = 0;
	for (int j = 0; j < C / 2; j++)
	{
		for (int i = var; i < R - g; i++)
		{
			if (A[i][j] < B[0])
			{
				B[0] = A[i][j];
			}
		}
		g++;
		var++;
	}
}
int main()
{
	int R, C;
	std::cin >> R;

	if ((R == 0) || (R % 2 != 0))
	{
		while ((R != 0) || (R % 2 == 0))
		{
			std::cout << "Please input new vallue Rows";
			std::cout << '\n';
			std::cin >> R;
			if ((R != 0) && (R % 2 == 0))
			{
				break;
			}
		}
	}

	std::cout << "Please input new vallue Cols";
	std::cout << '\n';
	std::cin >> C;
	if ((C == 0) || (C % 2 != 0))
	{
		while ((C != 0) || (C % 2 == 0))
		{
			std::cout << "Please input new vallue Cols";
			std::cout << '\n';
			std::cin >> C;
			if ((C != 0) && (C % 2 == 0))
			{
				break;
			}

		}
	}
	srand(time(0));


	int B[3];
	int** A = new int* [R];
	for (int i = 0; i < R; i++)
	{
		A[i] = new int[C];
	}
	B[0] = 500000;
	B[1] = -5555555;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			A[i][j] = 0;
		}
	}
	int g = 0;
	int var = 0;
	for (int j = C - 1; j > C / 2 - 1; j--)
	{
		for (int i = var; i < R - g; i++)
		{
			A[i][j] = rand() % 10;
			if (A[i][j] != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			}
		}
		g++;
		var++;
	}
	g = 0;
	var = 0;
	for (int j = 0; j < C / 2; j++)
	{
		for (int i = var; i < R - g; i++)
		{
			A[i][j] = rand() % 10;
			if (A[i][j] != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			}
		}
		g++;
		var++;
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			std::cout << A[i][j] << '\t';
		}
		std::cout << '\n';
	}
	funtion(A, C, R, B);
	std::cout << "The smallest varible in left path is " << '\t' << B[0];
	std::cout << '\n';
	std::cout << "The begest varible in right path is " << '\t' << B[1];
}

*/