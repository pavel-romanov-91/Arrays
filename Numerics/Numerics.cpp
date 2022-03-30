#include<iostream>
#include <sstream>
#include <bitset>
#include <limits>
using namespace std;

//#define DECIMAL
//#define OCTAL
#define HEXADECIMAL

void main()
{
	setlocale(LC_ALL, "");
#ifdef DECIMAL
	int decimal; //десятичное число, водимое с клавиатуры
	const int SIZE = 32;//максимальное возможное веденное число
	bool bin[SIZE] = {};// этот масств будет хранить разряды двоичного числа
	cout << "Введите десятичное число:"; cin >> decimal;
	int i = 0; //фактическая разрядность числа
	for (; decimal; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		//n++;
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
	char octal[16];
	cout << "Введите десятичное число:"; cin >> octal;
	istringstream in(octal);
	short int num;
	in >> std::oct >> num;
	if (in)
	{
		cout << bitset<numeric_limits<unsigned short int>::digits>(num) << '\n';
	}
#endif // DECIMAL
#ifdef OCTAL
	int decimal;
	const int SIZE = 16;
	double oct[SIZE] = {};
	cout << "Введите десятичное число:"; cin >> decimal;
	int i = 0;
	for (; decimal; i++, decimal /= 8)
	{
		oct[i] = decimal % 8;
	}
	for (i--; i >= 0; i--)
	{
		cout << oct[i];
	}
	cout << endl;
#endif // OCTAL
#ifdef HEXADECIMAL
	string digits[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
	int decimal;
	cout << "Введите десятичное число:"; cin >> decimal;
	string hexadecimal;
	do
	{
		hexadecimal.insert(0, digits[decimal % 16]);
		decimal /= 16;
	} 
	while (decimal != 0);
	cout << hexadecimal << "\n";
#endif // HEXADECIMAL


	
	
} 