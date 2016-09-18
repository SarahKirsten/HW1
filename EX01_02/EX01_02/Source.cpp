/////////////////////////
//Program Name: EX01_02
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/15/2016
///////////////////////

/*
write a function called ex03 takes no arguments and returns a void. call function from main()
in this function:

DONE	prompt user for area of a square. output length of the diagonal for that square

DONE	prompt user for a yes or no response (y or n) using a char variable. output "yes" if the user gave you a 'y' and "no" if the user gave you 'n'

HELP	initialize a char variable tab to the tab character

declare a string variable mailingAddress and prompt user for their mailing address

initialize a string variable to the empty string
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

void ex03();//declares function

int main()
{
	ex03();//call function
	return 0;
}


void ex03()//find diagonal length from area of a square. yes or no response. char variable to the tab character. mailing address. empty string.
{
	int areaOfsquare; //declares variable for area of a square
	cout << "Enter the area of a square: ";//prompts user for area of a square
	cin >> areaOfsquare;//input from user for area of a square
	cout << "The length of the diagonal for this square is: " << sqrt(areaOfsquare + areaOfsquare) << ".\n\n";//a^2 plus b^2 equals c^2. 
																											  //SHORTCUT: area of square == a^2 & b^2 so squareroot (area of square plus area of square) is the diagonal length


	char input; //declares character variable
	cout << "Type 'y' or 'n': ";//prompts user for yes or no
	cin >> input;//input from user to character variable
	if (input == 'y')//determines what to say based on input
		cout << "Yes." << endl;//outputs yes if input is y
	else if (input == 'n')//outputs no if input is n
		cout << "No." << endl;
	else
		cout << "That is not what I asked for..." << endl;//outputs message if input is not what asked


	char tab;
}
