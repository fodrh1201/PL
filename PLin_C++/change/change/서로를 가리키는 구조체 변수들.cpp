#include <iostream>
using namespace std;

struct Dizzy
{
	int id;
	Dizzy* p;
};

int main()
{
	Dizzy a, b, c;
	a.id = 1;
	a.p = &b;

	b.id = 2;
	b.p = &c;

	c.id = 3;
	c.p = &a;

	cout << "a.id = " << a.id << "\n";
	cout << "b.id = " << a.p->id << "\n";
	cout << "c.id = " << a.p->p->id << "\n";
	cout << "a.id = " << a.p->p->p->id << "\n";

	getchar();
}