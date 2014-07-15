#include <iostream>
#include <bitset>
using namespace std;

struct Pixel116
{
	unsigned int blue : 5;
	unsigned int green : 6;
	unsigned int red : 5;
};

union Convert16
{
	Pixel116 pixel;
	unsigned short us;
};

int main()
{
	unsigned short color = 0x1234;

	Convert16 convert;
	convert.us = color;

	cout << bitset<16>(color) << "\n";
	cout << bitset<16>(convert.pixel.blue) << "\n";

	getchar();
}