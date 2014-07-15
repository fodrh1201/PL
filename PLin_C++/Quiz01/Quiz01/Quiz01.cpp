// Quiz01.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	char* nameList[17] = { "������", "�幮��", "������", "�����", "�輺��",
		"�����", "�迬��", "�迵��", "������", "�ڼ���",
		"������", "�ո���", "�۰�", "������", "�����", "�ӿ���", "������" };
	
	Mixing(nameList);
	Print(nameList);

	getchar();

	return 0;
}

