#include <iostream>
using namespace std;

//PROGRAM: Hypotenuses
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: Prompts the user to input the lenghts of two
//				sides A and B so it can calculate C in a right triangle.

int main()
{
	//Variables
	double dLengthA;
	double dLengthB;
	double dLengthC;

	//Prompt for input
	cout << "Enter the Length of A: ";
	cin >> dLengthA;
	cout << "Enter the Length of B: ";
	cin >> dLengthB;

	//Calculate
	dLengthC = pow(dLengthA, 2) + pow(dLengthB, 2);
	dLengthC = sqrt(dLengthC);

	//Display output
	cout << "The missing length is: " << dLengthC << endl;

	return 0;
}