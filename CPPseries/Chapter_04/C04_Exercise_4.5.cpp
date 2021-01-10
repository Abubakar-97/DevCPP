#include "std_lib_facilities.h"
using namespace std;

/*
 * @brief <four_five>
 * Write a program that performs as a very simple calculator. 
 *Your calculator should be able to handle the four basic math operations — add, subtract, multiply, and divide — on two input values. 
 *Your program should prompt the user to enter three arguments: two double values and a character to represent an operation. 
 *If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum of 35.6 and 24.1 is 59.7. 
 *In Chapter 6 we look at a much more sophisticated simple calculator.
 */
void four_five()
{

	float num1 = 0, num2 = 0;
	char opera_tor;

	cout << "Enter arguments in the calculator please: " << endl;

	cin >> num1 >> opera_tor >> num2;

	switch(opera_tor)
	{
	case '+':
		cout << "sum of " << num1 << " and " << num2 << " is " << num1 + num2;
		break;
	case '-':
		cout << "sub of " << num1 << " and " << num2 << " is " << num1 - num2;
		break;
	case 'x':
		cout << "mul of " << num1 << " and " << num2 << " is " << num1 * num2;
		break;
	case '/':
		cout << "div of " << num1 << " and " << num2 << " is " << num1 / num2;
		break;
	default:
		cout << "You entered a wrong statement"<<endl;
	}
	return;
}