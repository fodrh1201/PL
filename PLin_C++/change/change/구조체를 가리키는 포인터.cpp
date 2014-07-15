#include <iostream>
using namespace std;

struct Rectangle
{
	int x, y;
	int width, height;
};

int main()
{
	Rectangle rc = { 100, 100, 50, 50 };

	Rectangle* p = &rc;

	(*p).x = 200;
	p->y = 250;

	cout << "rc = (" << rc.x << ", " << rc.y << ", ";
	cout << rc.width << ", " << rc.height << ") \n";

	getchar();
}