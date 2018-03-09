#include "stdafx.h"
#include <cmath>
#include <iostream>

double ssd(int incomingArray[], const int arraySize)
{
	double total = 0;
	for (int a = 0; a < arraySize; a++) {
		total += incomingArray[a];

	}
	double mean = total / arraySize;
	double c = 0;
	for (int a = 0; a < arraySize; a++) {
		double b = incomingArray[a] - mean;
		c += b * b;

	}

	double mean1{ c / (arraySize - 1) };
	double patrickAnswer = sqrt(mean1);
	return patrickAnswer;
}