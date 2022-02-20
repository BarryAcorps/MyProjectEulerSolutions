// This program will get the sum of all multiples of 3 and 5 under a constant, usually 1000.
// Also, this is a very bad solution. Don't use this.
#include <string> //includes the string header
#include <iostream> //includes the input-output string header.

bool divisble3or5( int number ) {
	bool divisible = false; //Initializes the divisible bool.
		
	std::string stringNum = std::to_string(number); //Turns the integer into a string.
	int stringNumLength = stringNum.length(); //Obtains the length of the string, or how many digits there are.
	int sumOfDigits = number; //The initalization value is there just in case the number is already a 1-digit number.

	char lastDigit = stringNum[stringNumLength - 1];

	if (lastDigit == '5' || lastDigit == '0') //If the last digit is '5' or '0' then
		divisible = true; //It is divisble by 5.

	//Getting the digital root of the number via the loop to check if divisible by 3.
	while (stringNumLength > 1) {

		sumOfDigits = 0; //Resets the value of sumOfDigits for every iteration of the while loop.

		for (int counter = 0; counter < stringNumLength; counter++) {
			sumOfDigits += (stringNum[counter] - '0'); //This loop will add all of the digits and store it in sumOfDigits
		}

		stringNum = std::to_string(sumOfDigits); //Turns the sum of digits into a string, and stores it in the stringNum as the new number
		stringNumLength = stringNum.length(); //Reobtains the length of stringNum
	}

	//Check if the digital root is 3, 6, or 9, and if so, it is divisble by 3.
	if (sumOfDigits == 3 || sumOfDigits == 6 || sumOfDigits == 9)
		divisible = true; 

	return divisible;
}

int main() {
	
	int summation = 0;

	for (int i = 1; i < 1000; ++i) { //Will run 1000 times, where i is the current iteration of the loop.
		if (divisble3or5(i)) //If i is divisible by 3 or 5...
			summation += i; //add i to the summation.
	}
	std::cout << "The sum of all natural numbers that are multiples of 3 or 5 under 1000 is " << summation << std::endl;
	//Prints out the result.

	return 0;
}
