#include "finde.h"
#include "stdafx.h"
#include <cmath>

double e = 1;
double tol;

void find_e() {
	
	//variables. Difference for evaluating tolerance, denominator for Euler formula, e and xn1 for
	//calculating difference
	e = 1; //euler's constant
	double difference; 
	double nextPos = 1; //n + 1
	double denominator = 1; //what 1 is being divided by
	double n = 0; //

	//calculates Euler's number to user's tolerance
	do {
		n++;
		denominator *= n;
		nextPos = e / denominator; 
		 
		difference = abs(e - nextPos);
		e = nextPos;
	} while (difference < tol);
	
}
