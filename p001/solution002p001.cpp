// This program will get the sum of all multiples of 3 and 5 under a constant, usually 1000.
// This is an ok solution.
#include <iostream>

int main() {

	int sum = 0; //initialize the sum 

	for (int i = 1; i < 1000; ++i) {
		if ( i % 3 == 0 || i % 5 == 0 ) {  //If any of the mod functions are equals 0, then add i to the sum.
			sum += i;
		}
	}
	//Print output
	std::cout << "The sum of all natural numbers that are multiples of 3 or 5 under 1000 is " << sum << std::endl; 
}
