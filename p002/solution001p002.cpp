//You get the drill, Fibbonacci.
#include <iostream>

int main() {

	int nMin2 = 1; int nMin1 = 1; 
	int answer = 0;

	while (nMin1 < 4000000) {
		int nextTerm = nMin1 + nMin2;
		nMin2 = nMin1; //switching the values
		nMin1 = nextTerm; // ^^

		if (nextTerm % 2 == 0) answer += nMin1; 
	}

	std::cout << "The sum of all even-number values of the Fibbonacci sequence under a million is " << answer << std::endl;
}
