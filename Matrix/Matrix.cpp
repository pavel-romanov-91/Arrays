#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------------------\n"

//#define ADDITION

void main()
{
	setlocale(LC_ALL, "");
	const int m = 3;	//количество строк
	const int n = 3;	//количество столбцов
	int A[m][n] = {};
	int B[m][n] = {};
	//запалняем матрицу случайными числами
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	//выводим матрицу на экран А
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	cout << delimiter << endl;

	//выводим матрицу на экран В
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	//Сложение матриц
#ifdef ADDITION
	int C[m][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	//вывод результата на экран
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
#endif // ADDITION
	//Умножение матриц
	int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		//i - выбераем строку А
		for (int j = 0; j < n; j++)
		{
			//k - выбирает столбец матрицы В
			for (int k = 0; k < n; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	//вывод результата на экран
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
}