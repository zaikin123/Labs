#include "pch.h"
#include "iostream"

using namespace std;

bool Prime(unsigned long n) //функция, которая находит простые числа 
{
	for (int i = 2; i <= (n / 2); i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	const int SIZE = 20;
	unsigned long fibonachi[SIZE] = { 0, 1 };

	for (int i = 2; i < SIZE; i++)
		fibonachi[i] = fibonachi[i - 1] + fibonachi[i - 2];

	for (int i = 1; i < SIZE; i++)
		if (Prime(fibonachi[i]))
		{
			if (fibonachi[i] > 100) break;
			cout << i << " " << fibonachi[i] << endl;
		}

	cout << endl;

	system("pause");
	return 0;
}
