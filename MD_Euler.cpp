// MD_Euler.cpp : Defines the entry point for the console application.
//
#include "finde.h"
#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;

//extern double e;

int main()
{
	cout << "Welcome to my Euler's number calculator!" << endl;

	//takes input for tolerance. Variable is global in header file
	cout << "\n Please enter the tolerance you would like   ";
	cin >> tol; 
	tol /= 10;

	//call statement. Changes e through global variable
	find_e();

	//Output
	cout << "\nYour value for e is " << e << endl;

    return 0;
}

