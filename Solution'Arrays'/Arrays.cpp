#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; // ���������� ��������� �������
	int arr[n] = {};
	int sum = 0;
	int min, max;
	double sr;
	//arr[2] = 123;
	int minRand;
	int maxRand;
	cout << "������� ����������� ��������� �������� �����:"; cin >> minRand;
	cout << "������� ������������ ��������� ��������� �����:"; cin >> maxRand;

	//cout << "������� �������� ������� (" << n << " ��):";
	for (int i = 0; i <= n; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % (maxRand - minRand) + minRand;
		
	}
	//����� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//����� ������� �� ����� � �������� �������:
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
	cout << "��������:" << (double)sum / n;
	cout << endl;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� �������:" << min << endl;
	cout << "������������ �������� �������:" << max << endl;
	
}