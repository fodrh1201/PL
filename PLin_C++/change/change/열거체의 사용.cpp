#include <iostream>
using namespace std;

enum JOB_KINDS { JOB_DWARF, JOB_WARRIOR, JOB_SORCERER };

struct Character
{
	JOB_KINDS jobType;
};

int main()
{
	Character c;
	if (c.jobType == JOB_SORCERER)
	{

	}

	return 0;
}