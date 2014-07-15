// Quiz01.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

void Swap(char* list[], int a, int b)
{
	char* temp;
	temp = list[a];
	list[a] = list[b];
	list[b] = temp;
}

void Mixing(char* list[])
{
	srand((unsigned int)time(NULL));
	int i = 0;
	while (i < 5)
	{
		int r = rand() % 17;

		if (r > i)
		{
			Swap(list, i, r);
			i++;
		}
	}
}

void Print(char* list[])
{
	for (int i = 0; i < 5; i++)
		printf_s("%s \n", list[i]);
}

int _tmain(int argc, _TCHAR* argv[])
{
	char* nameList[17] = { "양지웅", "장문익", "고형진", "김덕성", "김성연",
		"김승현", "김연우", "김영하", "남현욱", "박수빈",
		"서동유", "손명준", "송경", "송지훈", "우재우", "임예림", "정세빈" };
	
	Mixing(nameList);
	Print(nameList);

	getchar();

	return 0;
}

