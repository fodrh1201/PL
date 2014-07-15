#include <iostream>
using namespace std;

int main()
{
	int target = 20;
	int& ref = target;

	typedef int ARR_INT_10[10];



	ARR_INT_10 a = { 0 };
	
	cout << a[0] << "\n";

	getchar();
}