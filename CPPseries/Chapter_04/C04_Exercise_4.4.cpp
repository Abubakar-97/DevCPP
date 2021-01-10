#include "std_lib_facilities.h"
using namespace std;
#define NUMOFTRIES 7

/*
 * @brief <four_four>
 *Write a program to play a numbers guessing game.
 *The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is
 *(e.g., “Is the number you are thinking of less than 50?”).
 *Your program should be able to identify the number after asking no more than seven questions. 
 *Hint: Use the < and <= operators and the if-else construct.
*/

void four_four()
{
	int median;
	cout << "We will play game. Guess between 1 to 100" << std::endl;
	string answer;
	auto first = 1;
	auto last = 100;
	
	//Algorithm
	//each time try to change the median
	//repeat until num is found
	for(auto i=1; i<=NUMOFTRIES; i++)
	{
		if(first+last %2==0)
		{
			median = (first + last) / 2;
		}

		else
		{
			median = ((first + last) + 1) / 2;
		}
		
		cout << "Is the number you are thinking of less than " << median << "? 'yes' or 'no'\n";
		cout << "Type correct if number is true" << endl;
		cin >> answer;

		if(answer == "yes")
		{
			last = median-1;
		}

		else if(answer=="no")
		{
			//check why unreachable code
			first = median;
		}
		else if(answer=="correct")
		{
			break;
		}
		else
		{
			cout << "Only enter Yes or No please" << endl;
			--i;
		}
	}

	cout << "The number you guessed is: "<<first<<endl;

	return;
}