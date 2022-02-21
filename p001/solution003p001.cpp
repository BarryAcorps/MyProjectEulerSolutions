// This program will get the sum of all multiples of 3 and 5 under a constant, usually 1000.
// This is a better solution
#include <iostream>

int sMultiplesOf(int number, int cap) {
	
	int numOfTerms = ( cap - 1 ) / number ; //makes the numOfTerms by performing integer division.
	return  ( numOfTerms * (number + (numOfTerms * number) ) ) / 2 ; //Arithmetic Series formula
}

int main() {
	
	int cap = 1000; //Intializes the capacity.
	int summation = sMultiplesOf(3, cap) + sMultiplesOf(5, cap) - sMultiplesOf(15, cap); //Inclusion-Exclusion principle
	//Prints the output
	std::cout << "The sum of all natural numbers that are multiples of 3 or 5 under 1000 is " << summation << std::endl;
}
