#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //десятичное число, водимое с клавиатуры
	const int SIZE = 32;//максимальное возможное веденное число
	bool bin[SIZE] = {};// этот масств будет хранить разряды двоичного числа
	cout << "Введите десятичное число:"; cin >> decimal;
	int i = 0; //фактическая разрядность числа
	for (;decimal; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		//n++;
	}

	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
} 