/////////////////////////
//Program Name: EX01_04
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/19/2016
///////////////////////

/*write a function called ex05, which takes no arguments and returns a void. call this function in main.
in this function:

DONE	write a loop that asks the user for five integers, and stores those integer values in an array

DONE	write some code that calculates the sum and the product of the values in the integers, and outputs those results

DONE	write a function that takes an array and the size of the array, and outputs the values in that array.
		call the array from your ex05 function, passing the array of 5 integers from (a)

DONE	write a function that takes an array and the size of that array, then prompts the user for a value, then outputs whether or not the array contains that value
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

void ex05();//initialize function
void printArray(int arg[], int length);//initialize function
void findInArray(int arg[], int length);//initialize function


int main()
{
	ex05();//call function
	return 0;
}


void ex05()//function: loop of five integers, stores values to an array. code that calculates sum and product, outputs results. 
{
	int const size = 5;
	int values[size];//states array with slots equal to size
	cout << "Please enter 5 positive numbers.\n";//prompts for numbers
	for (int i = 0; i < size; i++)//loop to read in every number from user
	{
		cin >> values[i];//stores to array
	}
	cout << endl;

	int a;//count variable
	int sum = 0;//initialize variable
	int product = 1;//initialize variable
	for (a = 0;a < 5;a++)//loop to add up all the numbers in the array
	{
		sum += values[a];
	}
	cout << "The sum of those numbers is: " << sum << endl;//outputs the sum of the numbers in the array
	for (a = 0; a < 5; a++)//loop to multiply all the numbers in the array together
	{
		product *= values[a];
	}
	cout << "The product of those numbers is: " << product << endl;//outputs the multiplying of the numbers in the array

	

	printArray(values, size);//call function
	findInArray(values, size);//call function
	cout << endl;
}


void printArray(int arg[], int length)//function: takes an array and size of that array and outputs the values in that array.
{
	cout << endl;
	for (int n = 0; n < length; n++)
		cout << arg[n] << " ";
	cout << "\n\n";
}

void findInArray(int arg[], int length)//function: takes array and size of that array. prompts user for value. outputs whether or not the array contains that value.
{
	cout << endl << "Let's search for a number: ";
	int findMe;
	cin >> findMe;
	for (int i = 0; i < length; i++)//loop to read in every number from user
	{
		if (findMe == arg[i])
			cout << findMe << " exists in the array.\n";
		else
			cout << "Nope." << endl;
	}

}
