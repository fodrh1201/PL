// Test.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	//c Style

	printf_s("Hello, World\n");
	printf_s("Hello, World2\n");

	char* szText = "Hello, World3";
	
	printf_s("%s\n \n", szText);

	//c++ Style

	std::cout << "Hello, World" << std::endl;
	std::cout << "Hello, World2" << std::endl; 

	std::string strText = "Hello, World3";
	std::cout << strText << std::endl;

	getchar();
	return 0;
}

