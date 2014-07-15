#include <iostream>
using namespace std;

struct StudentInfo
{
	char name[20];
	int stdNumber;
	float grade[2];
};

int main()
{
	struct StudentInfo si[5] = {
		{ "s1", 1000, { 3.2f, 4.0f } },
		{ "s2", 1001, { 3.3f, 4.3f } },
		{ "s3", 1002, { 4.0f, 4.4f } },
		{ "s4", 1003, { 4.0f, 4.4f } },
		{ "s5", 1004, { 4.0f, 4.4f } }
	};

	for (int i = 0; i < 5; ++i)
	{
		cout << si[i].name << "\n";
		cout << si[i].stdNumber << "\n";
		cout << si[i].grade[0] << ", " << si[i].grade[1] << "\n \n";
	}

	getchar();
}