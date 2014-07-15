#include <iostream>
using namespace std;

void InsertionSort(int l[], int size)
{
	for (int i = 1; i < size; ++i)
	{
		int j = i;
		int temp = l[i];
		while (j >= 1 && temp < l[j - 1])
		{
			l[j] = l[j - 1];
			j--;
		}
		l[j] = temp;
	}
}

int main()
{
	int l[5] = { 3, 5, 7, 1, 2 };
	InsertionSort(l, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout << l[i] << "\n";
	}
	getchar();
}