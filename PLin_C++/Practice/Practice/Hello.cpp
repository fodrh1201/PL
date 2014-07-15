#include <iostream>

class A
{
	int a;
	char c;
};

int main()
{
	int a, b, c;
	a = 100;
	b = 200;
	c = 300;

	int* pa = nullptr;

	int** ppa = nullptr;

	{
		ppa = new int*;
		pa = new int;

		A* test = new A;

	}

	std::cout << *ppa; // ppa == int** ; *ppa == int*, new 로만들면 heap에 생김.

	std::cout << a << " ," << b << " ," << c << "\n";

	int aa = 3;
	int*p = &aa;
	int** pp = &p;
	int*** ppp = &pp;
	int**** pppp = &ppp;

	int***** ppppp = &pppp;

	*p = 5;
	**pp = 5;
	***ppp = 5; //포인터의 depth만 생각.

	int bb = 3;
	int** ppb = nullptr;
	*ppb = &bb;

	int*** testArray[3];

	int** testA[2];

	testA[0] = pp;
	testA[1] = ppb;
	*(testA + 1) = ppb;
	int**** aaa = testArray;

	std::cout << a << " ," << b << " ," << c << "\n";

	getchar();


	return 0;
}
