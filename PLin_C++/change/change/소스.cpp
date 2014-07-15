#include <iostream>
using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	long lArray[20];

	long(*p)[20] = &lArray;

	(*p)[3] = 300;
	cout << lArray[3] << "\n";

	getchar();
}