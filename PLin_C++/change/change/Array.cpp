#include <iostream>
using namespace std;

int main()
{
	char c = 'l';
	char* pc = &c;
	char** ppc = &pc;

	cout << **ppc << "\n";

	getchar();
}