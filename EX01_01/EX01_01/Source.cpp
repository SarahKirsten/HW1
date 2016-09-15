/////////////////////////
//Program Name: EX01_01
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/8/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

void ex02(); //write a function called ex02 which takes no arguments and returns a void

int main() //call ex02 function from main()
{
	ex02();//calling function
	return 0;
}



void ex02()
{
	//declare a variable hasPassedTest and initialize it to true
	int hasPassedTest = true;


	//declares two variables x and y which are initialized to random numbers. then outputs whether x is greater than or equal to y
	int x = rand();//declares variable and commits it to random number
	int y = rand();//declares variable and commits it to random number
	if (x >= y)//determines if x is greater than or equal to y
		cout << "The value of x: " << x << ", is greater than or equal to the value of y: " << y << endl << endl;//outputs x greater than or equal to y
	else
		cout << "The value of x: " << x << ", is less than the value of y: " << y << endl << endl; //outputs y greater than x


																								   //declares variable numberOfShares and prompts user for a value, outputs whether the value is less than 100
	double numberOfShares;//declares variable
	cout << "Enter a number." << endl;//prompts user for value
	cin >> numberOfShares;//commits input to variable
	if (numberOfShares < 100)//determines if inputted value is more or less than 100
		cout << "Number of Shares is less than 100." << endl;//outputs if value is less than 100
	else
		cout << "Number of Shares is greater than or equal to 100." << endl << endl;//outputs is value is equal to or more than 100


																					//prompts user for a box width and book width, then outputs if box width is evenly divisible by the book width
	int boxWidth, bookWidth; //declares variables for box width and book width
	cout << "Enter a box's width: ";//prompts user for box width
	cin >> boxWidth;//input from user for box width
	cout << endl << "Enter a book's width: ";//prompts user for book width
	cin >> bookWidth;//input from user for book width
	if (boxWidth % bookWidth == 0)//determines if box is divisible by book
		cout << endl << "The box's width is evenly divisible by the book's width." << endl << endl;//if box divisible by book, outputs as so.
	else
		cout << endl << "The box's width is NOT evenly divisible by the book's width." << endl << endl;//if box not divisible by book, outputs as so.


																									   //prompts user for shelf life of a box of chocolate and the outside temperature, then decreases shelf life by 4 if the outside temp. is greater than 90
	int boxOfchocolate; //declares variable
	int temperature;//declares variable
	cout << "Enter the shelf life of a box of chocolate: "; //prompts user for shelf life of box of chocolate
	cin >> boxOfchocolate;//input from user of shelf life of box of chocolate
	cout << endl << "Enter the outside temperature (in Farenheit): ";//prompts user for outside temperature
	cin >> temperature;//input from user of outside temperature
	if (temperature > 90)//if temperature greater than 90
		cout << endl << "The shelf life current shelf life is now: " << boxOfchocolate - 4 << "." << endl << endl;// reduce shelf life of box of chocolate by 4.
	else//if temperature not greater than 90
		cout << endl << "The shelf life has not changed from " << boxOfchocolate << "." << endl << endl;//dont reduce shelf life of box of chocolate
}

//Finished all parts