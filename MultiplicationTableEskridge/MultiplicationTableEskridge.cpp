// Developer Name: Greg Eskridge
// Date: 9/8/2016
// Program Title: Multiplication Table
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Declare Variables
	int xAxis = 0;
	int multiplicationResult = 0;
	int columnHeader = 0;
	int columnTab = 0;

	// Display the Column headers for the Multiplication Table
	// with tabs below each column header.
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

	// Use a while loop to display rows of the multiplication table
	// multiply xAxis by yAxis, then increment xAxis to the next row and repeat.
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

