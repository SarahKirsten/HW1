/////////////////////////
//Program Name: EX01_02
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/15/2016
///////////////////////


/* Write a function called ex03. returns a void. takes no arguments. call function in main().
	in this function:

	DONE	prompt user for area of square. output the diagonal for that square

	DONE	prompt user for a yes or no response (y or n) using a char variable output "yes" if 'y' and "no" if 'n'

	HELP/DONE	initialize a char variable tab to the tab character

	DONE	declare a string variable mailingAddress, prompt user for their mailing address

	DONE	initialize a string variable to the empty string

*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

void ex03();//states a function

int main()
{
	ex03();//calls the function
	return 0;
}


void ex03()//the function: find diagonal of square. yes or no response. char variable tab. mailingAddress. string variable to empty string.
{
	int areaOfsquare;//initialize variable
	cout << "Enter the area of a square: ";//prompt user
	cin >> areaOfsquare;//input from user
	cout << "The diagonal of this square is: " << sqrt(areaOfsquare + areaOfsquare) << endl << endl;//math to find diagonal length


	char userInput;//char variable for yes/no response
	cout << "Enter yes 'y' or no 'n': ";//prompt user
	cin >> userInput;//input from user
	if (userInput == 'y')//if loop to determine what to output
		cout << "Yes.\n";
	else if (userInput == 'n')
		cout << "No.\n";
	else
		cout << "That isn't what I asked for...." << endl;//just a little fun if they want to go against the grain


	char tab = '	';//tab variable with tab character
	cout << endl;


	string mailingAddress;//string for mailing address input
	cout << "Enter your mailing address: ";//prompt user for mailing address
	cin.ignore();//ignore previous cin lines so focus on the input hereafter
	getline (cin, mailingAddress); //input from user


	string myString = "";//initialize a string variable to the empty string
}
