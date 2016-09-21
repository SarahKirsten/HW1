/////////////////////////
//Program Name: EX01_03
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/19/2016
///////////////////////

/*Write a function called ex04 takes no arguments and returns a void. call function in main
in this function:

DONE	write code to ask the user for a number between 1 and 10. Loop until the user gives a valid input

DONE	use the number in part (a) to output the sum of the cubes from 1 to the number given (by cube, I mean that for a given number x, determine 3x)

DONE	use a do-while loop to output a number of asterisks, again using the input from (a)

DONE	use a for loop to output the even numbers from 0 to 40

DONE	implement a separate function that takes an integer, and doubles that integer. call that function from your ex04 function, using the value prompted in (a)

DONE	write a function called add that takes two integers, and returns the sum of those integers. call it using two random numbers.

HELP	write a function that adds one to its parameter. the function should take the integer as pass by reference.
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

void ex04();//initialize function
void separateFunction(int x);//initialize function
int add(int y, int z);//initialize function
void parameter();//initialize function


int main()
{
	ex04();//call function
	return 0;
}


void ex04()//function: loop for number between 1 and 10. use that to output sum of cubes. asterisk. even numbers from 0 to 40. 
{
	int userInput;//variable for user input
	
	do//do while loop to loop the prompt until the user complies
	{

		cout << "Enter a number between one and ten: ";
		cin >> userInput;
		if (userInput < 1 || userInput > 10)//to tell the user to try again because they won't listen to instructions
			cout << "That isn't what I asked for.\n";

	} while (userInput < 1 || userInput > 10);//keeps loop going until a number between (and including) 1 through 10 is entered
	
	
	int i = 0;//help moderate userInput until its to 1
	int sum;//adds up numbers from userInput to 1
	int totalSum = 0;//initialize for future math
	do//loop to find it all
	{
		sum = userInput - i;//number from userInput to 1
		i++;//increase i
		totalSum += sum;//adds up all the numbers from sum
	} while (i < userInput);//keeps loop going for numbers between 1 and userInput
	cout << "\nThe sum of the cubes from 1 to " << userInput << " is: " << totalSum * 3 << endl << endl;//outputs the total sum of the cubes of numbers from 1 to userInput

	int j = 0;//start count
	do//loop to output an * equal to original userInput number
	{
		cout << "* ";
		j++;
	} while (j < userInput);//stops loop when the number of asterisks is equal to original userInput number
	cout << endl << endl;//splits up part c from the next part in output

	for (int k = 0; k <= 40; k++)//loop to determine even numbers
	{
		if (k % 2 == 0)//tests if number is even or not
		{
			cout << k << " ";//only outputs even numbers
		}
	}

	cout << endl;

	separateFunction(userInput);//call function
	cout << endl << add(15,4) << endl;//call function
	parameter();//call function
}

void separateFunction(int x)//function: takes integer, doubles integer using value in (a)
{
	x *= 2;
	cout << endl << x << endl;
}

int add(int y,int z)//add two integers and returns the sum. using two random integers
{
	int sum = y + z;
	return sum;
}

void parameter()//add one to its parameter. should take the integer as pass by reference
{
	cout << "\ntesting3\n\n";
}