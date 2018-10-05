#include "finde.h"
#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;

//forward declaration so it can now be used beyond this point in the file
extern double e;
extern double tol;

int main()
{
	char any;

	cout << "Welcome to my Euler's number calculator!" << endl;

	//takes input for tolerance. Variable is global in header file
	cout << "\n Please enter the tolerance you would like   ";
	cin >> tol;
	tol /= 10; //ensures that loop runs until the correct tolerance is met

	//call statement. Changes e through global variable
	find_e();

	//output
	cout << "\nYour value for e is " << e << endl;

	cin >> any;

	return 0;
}
