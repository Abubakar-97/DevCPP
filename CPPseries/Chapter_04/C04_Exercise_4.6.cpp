#include "std_lib_facilities.h"
using namespace std;
int ask_num();
bool ask_num_condition(int num);
void number_to_name(vector<string> name_vector);
void name_to_number(vector<string> name_vector);
bool ask_name_condition(string num, vector<string> name_vector);
string ask_name(vector<string> name_vector);
int GetDigit(string s);
/*
 * @brief <four_six>
 *Make  a  vector holding the ten string values
 *"zero", "one", . . . "nine".
 *Use  that  in  a  program  that  converts  a  digit  to  its  corresponding  spelled-out value;
 *e.g., the input 7 gives the output seven.
 *Have the same program,  using  the  same  input  loop,  convert  spelled-out  numbers  into  their digit form;
 *e.g., the input seven gives the output 7.
 */


void four_six()
{
	vector<string> name = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	number_to_name(name);
	name_to_number(name);

	return;
}

void name_to_number( vector<string> name_vector)
{
	string name_of_num = ask_name(name_vector);
	int num_of_name = GetDigit(name_of_num);
	cout << "The number you asked is: " << num_of_name << " and it is spelled as: " << name_of_num;
	return;
}

string ask_name(vector<string> name_vector)
{
	cout << "Enter Name you want the number for: ";
	string asked_name;
	cin >> asked_name;

	if(ask_name_condition(asked_name, name_vector))
	{
		return asked_name;
	}

	cout << "please enter correct name of number: ";
	return ask_name(name_vector);
}

bool ask_name_condition(string num, vector<string> name_vector)
{
	for(int i=0; i<name_vector.size(); i++)
	{
		if(num == name_vector[i])
		{
			return true;
		}
	}
	return false;
}

int GetDigit(string s)
{
	int digit;
	if (s == "zero") {
		digit = 0;
	}
	else if (s == "one") {
		digit = 1;
	}
	else if (s == "two") {
		digit = 2;
	}
	else if (s == "three") {
		digit = 3;
	}
	else if (s == "four") {
		digit = 4;
	}
	else if (s == "five") {
		digit = 5;
	}
	else if (s == "six") {
		digit = 6;
	}
	else if (s == "seven") {
		digit = 7;
	}
	else if (s == "eight") {
		digit = 8;
	}
	else if (s == "nine") {
		digit = 9;
	}
	else {
		digit = -1;
	}
	return digit;
}





void number_to_name(vector<string> name_vector)
{
	int num= ask_num();
	cout << "The number you asked is: " << num<< " and it is spelled as: " << name_vector[num];	

	return;
}

int ask_num()
{
	cout << "Enter Number you want the name for: ";
	int num_asked = 0;
	cin >> num_asked;
	
	if(ask_num_condition(num_asked))
	{
		return num_asked;
	}

	cout << "please enter correct number: ";
	return ask_num();
	
}

bool ask_num_condition(int num)
{
	if (num > 9 || num < 0)
	{
		cout << "please enter number again: ";
		return false;
	}

		return true;

}