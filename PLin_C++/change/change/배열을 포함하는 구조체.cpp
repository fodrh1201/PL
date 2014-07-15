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
	StudentInfo si = { "Ko HyungJin", 1004, { 3.2f, 4.3f } };

	cout << si.name << "\n";
	cout << si.stdNumber << "\n";
	cout << si.grade[0] << ", " << si.grade[1] << "\n";

	getchar();
}