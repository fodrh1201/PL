#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <array>

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10];
	// c++ 11
	std::array<int, 10> arrAdv;
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i;
	}

	srand((unsigned int)time(NULL));
	printf_s("RAND : %d", arr[rand() % _countof(arr)]);
	
	//�����޸𸮿� �����޸�

	int arrTest1[10];
	sizeof(arrTest1);

	int* pArr = new int[10]; //�������� �����޸𸮸� ����
	sizeof(pArr); // �����迭�� �����迭�� ����?

	char* p = "NEXT"; //�ڵ念���� ���� �� �ּҸ� ������. int* pArr = int[10];�� ����, �ڵ念���� ����� ������� ���� �Ұ�. �о�� ���� �ִ�.

	getchar();
}