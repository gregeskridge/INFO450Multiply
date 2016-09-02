// MultiplicationTableEskridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int xAxis = 0;
	int multiplicationResult = 0;

	while (xAxis < 11)
	{
		int yAxis = 0;
		while (yAxis < 11)
		{
			multiplicationResult = xAxis * yAxis;
			printf("%d\t", multiplicationResult);
			yAxis++;
		}
		printf("\n");
		xAxis++;
	}
    return 0;
}

