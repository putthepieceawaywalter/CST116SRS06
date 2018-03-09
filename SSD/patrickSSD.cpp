#include "stdafx.h"
#include <cmath>
#include <iostream>

double ssd(const int arraySize, const int incomingArray[])
{
	double total{ 0.0 };
	for (int a{ 0 }; a != arraySize; a++) {
		total += incomingArray[a];
	}
	double mean = total / arraySize;
	double total1{ 0 };
	for (int a{ 0 }; a != arraySize; a++) {
		double b = incomingArray[a] - mean;
		total1 += b * b;
	}
	double mean1{ total1 / (arraySize - 1) };
	double patrickAnswer = sqrt(mean1);
	return patrickAnswer;
}