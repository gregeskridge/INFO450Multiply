// MultiplicationTableEskridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int xAxis = 0;
	int multiplicationResult = 0;
	int columnHeader = 0;
	int columnTab = 0;

	printf("\t");
	while (columnHeader < 11)
	{
		printf("%d*\t", columnHeader);
		columnHeader++;
	}

	printf("\n");

	printf("\t");
	while (columnTab < 11)
	{
		printf("---\t");
		columnTab++;
	}
	printf("\n");

	while (xAxis < 11)
	{
		int yAxis = 0;
		int rowHeader = 0;

		printf("%d*\t", xAxis);

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

