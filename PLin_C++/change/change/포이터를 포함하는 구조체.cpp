#include <iostream>
using namespace std;

struct IHavePointer
{
	int x, y;
	long* pl;
};

int main()
{
	long l = 300;

	IHavePointer ihap;
	ihap.pl = &l;

	getchar();

	return 0;
}