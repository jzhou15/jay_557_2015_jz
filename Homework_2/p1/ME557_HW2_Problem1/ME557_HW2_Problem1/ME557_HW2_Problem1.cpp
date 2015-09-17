// ME557_HW2_Problem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double myFunction(int n)
{
	unsigned int i = 0, j = 1, t, k;
	for (k = 0; k <= n; ++k)
	{
		t = i + j;
		i = j;
		j = t;
	}
	return j;
}




int main(int argc, char *argv[])
{
	int p = myFunction(10);
	cout << p << endl;
	system("PAUSE");
}
