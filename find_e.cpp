#include "finde.h"
#include "stdafx.h"
#include <cmath>

double e = 0;
double tol;

void find_e() {
	
	//variables. Difference for evaluating tolerance, denominator for Euler formula, e and xn1 for
	//calculating difference
	//e = 1; //euler's constant
	double difference; 
	double nextPos = 1; //n + 1
	double denominator = 1; //what 1 is being divided by
	double fact; //factorial of n
	double n = 0; //n in terms of the sequence

	//calculates Euler's number to user's tolerance
	do {
		// denominator is multiplied by a number that is one larger every iteration
		for (int i = 0; i <= n; i++) { //calculates factorial
			if (i == 0) {
				fact = 1;
			}
			else {
				fact *= i;
						}
		}
		
		//1 + 1/1, 1/1 + 1/(1*2), 1/(1*2*3)....
		nextPos = e + 1.0/fact; 		
		
		//calculates difference
		difference = abs(e - nextPos);
		
		//sets up for next iteration
		e = nextPos;
		n++;
		
	} while (difference > tol);
	
}
