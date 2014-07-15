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
	
	//정적메모리와 동적메모리

	int arrTest1[10];
	sizeof(arrTest1);

	int* pArr = new int[10]; //힙공간에 동적메모리를 저장
	sizeof(pArr); // 동적배열과 정적배열이 뭐야?

	char* p = "NEXT"; //코드영역에 저장 된 주소를 가져옴. int* pArr = int[10];과 같음, 코드영역에 저장된 상수여서 변경 불가. 읽어올 수만 있다.

	getchar();
}