#include "finde.h"
#include "stdafx.h"
#include <cmath>

void find_e() {
	
	//variables. Difference for evaluating tolerance, denominator for Euler formula, e and xn1 for
	//calculating difference
	e = 1;
	double difference;
	double en1 = 1;
	double denominator = 1;

	//calculates Euler's number to user's tolerance
	do {
		e = e / denominator;
		denominator *= denominator + 1; 
		en1 = e / denominator;
		difference = abs(e - en1);
		e = en1;
	} while (difference < ::tol);
	
}
