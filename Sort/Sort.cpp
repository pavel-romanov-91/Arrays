#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	cout << a << tab << b << endl;
	int buffer = a;
	a = b;
	b = buffer;
	cout << a << tab << b << endl;
	const int n = 5;
	int arr[n] = {};
	int minRand, maxRand;
	cout << "Введите минемальное случайное число:"; cin >> minRand;
	cout << "Введиете максимальеное случайное число:"; cin >> maxRand;
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Сортировка массива


	//Вывод отсортировочного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}