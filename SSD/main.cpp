// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cmath>
#include "patrickHFile.h"
#include "Darens_SSD.h"



int main()
{
	int ianArray[] = { 42, 110, 74, 189, 192, 10, 5, 8, 89, 110, 99, 153, 77, 21, 183, 25, 78, 60, 89 };
	int patrickArray[] = { 12, 13, 334, 45, 65, 0, 22, 32, 65, 89, 74, 17, 9, 147, 15, 14, 85, 25, 36, 25, 21 };

	const int arraySize = sizeof patrickArray / sizeof patrickArray[0];
	const int arraySize1 = sizeof ianArray / sizeof ianArray[0];
	int newArray[arraySize];
	int newArray1[arraySize1];

	// double a = Patrick's code and Ian's array
	// double b = Daren's code and Ian's array
	// double c = Daren's code and Patrick's array
	// double d = Patrick's code and Patrick's array
	double a = ssd(ianArray, arraySize1);
	double b = Darens_SSD(arraySize1, ianArray);
	double c = Darens_SSD(arraySize, patrickArray);
	double d = ssd(patrickArray, arraySize);

	bool ianTest;
	bool patrickTest;
	if ((abs(a - b)) > .000001) {
		ianTest = false;
	}
	if ((abs(c - d)) > .000001) {
		patrickTest = false;
	}

	if (!ianTest) {
		std::cout << "Patrick and Daren got different results when testing Ian's array" << std::endl;
	}
	if (!patrickTest) {
		std::cout << "Patrick and Daren got different results when testing Patrick's array" << std::endl;
	}

	if (ianTest) {
		std::cout << "Same result when testing Ian's array" << std::endl;
	}
	if (patrickTest) {
		std::cout << "Same result when testing Patrick's array" << std::endl;
	}
	return 0;

}
