// Lecture1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x; //stores whole numbers
	cout << "Give me a number:" << endl; 
	cin >> x;

	x = x + 5;

	cout << "Look what I did, I added 5 to it" << endl;
	cout << x << endl;

	return 1;
}