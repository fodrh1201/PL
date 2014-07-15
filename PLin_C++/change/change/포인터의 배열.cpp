#include <iostream>
using namespace std;

int main()
{
	double a[3], b[3], c[3];
	
	double* dp[3];
	dp[0] = a;
	dp[1] = b;
	dp[2] = c;

	a[1] = 3;

	cout << dp[0][1];

	getchar();

}