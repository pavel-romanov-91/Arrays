//Dublicates
#include<iostream>
using namespace std;

#define tab "\t"
#define SEARCH
//#define SEARCH_1

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		bool already_there = false;// предлогаем что элемент был выбран
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				already_there = true;
				break;
			}
		}
#ifdef SEARCH
		if (already_there)continue;
		int count = 1; //счетчик вхождений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 1)printf("Значение %d встречается %d раз\n", arr[i], count);
		//if (count > 1)cout << arr[i] << " встречается " << count << " раз" << endl;
		//if (count > 0)cout << arr[i] << " повторяется " << count << " раз" << endl;  
#endif // SEARCH

#ifdef SEARCH_1
		if (!already_there)
		{
			int count = 1; //счетчик вхождений
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			if (count > 1)cout << arr[i] << " встречается " << count << " раз" << endl;
			//if (count > 0)cout << arr[i] << " повторяется " << count << " раз" << endl;
		}
#endif // SEARCH_1

	}
}