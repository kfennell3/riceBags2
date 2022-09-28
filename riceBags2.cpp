// Name: Kyle Fennell
// Date: September 12 2022
// Program Title: riceBags
// Program Description: Calculates total number of rice bags needed to store one metric ton
#include <iostream>
#include <string>
using namespace std;

// Named constants
const double METRIC_TON = 2205;

int main()
{
	// Variable declaration
	double pounds;
	double bags;

	//Program title and description for the user
	cout << "Program Title: riceBags" << endl;
	cout << "Program Description: This program calculates Calculates total number of rice bags needed to store one metric ton" << endl;
	cout << endl;

	// User input
	// Intaking pounds per bag
	cout << "How many pounds of rice can one bag hold?" << endl;
	cin >> pounds;
	cout << endl;

	// Calculations
	// Dividing one metric ton by the pound of rice a bag can hold
	bags = std::ceil(METRIC_TON / pounds);

	// Output to the screen
	// Outputting answer
	cout << "The number of bags needed to store one metric ton of rice is: " << bags << endl;

	return 0;
}