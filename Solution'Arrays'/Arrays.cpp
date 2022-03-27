#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; // количество элементов массива
	int arr[n] = {};
	int sum = 0;
	int min, max;
	double sr;
	//arr[2] = 123;
	int minRand;
	int maxRand;
	cout << "Введите минимальное возможное случаное число:"; cin >> minRand;
	cout << "Введите максимальное возможное случайное число:"; cin >> maxRand;

	//cout << "Введите элементы массива (" << n << " шт):";
	for (int i = 0; i <= n; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % (maxRand - minRand) + minRand;
		
	}
	//вывод масива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
		}
	}
	cout << ("sum=%d\n", sum); cout << endl;
	cout << "Среднеее:" << (double)sum / n;
	cout << endl;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение массива:" << min << endl;
	cout << "Максимальное значение массива:" << max << endl;
	
}