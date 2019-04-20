/*  Program: Store and Employee Bonus Program v1.0
Author: Daniel Zelfo
Class: CSCI 110
Date: 10/3/2018
Description: Displays store and employee bonus using input of monthly sales and sales increase.

I certify that the code below is my own work.
*/

#include <iostream>
using namespace std;

//prototypes
void getSales(double& monthlySales);
void storeBonus(double monthlySales, double& storeAmount);
void getIncrease(double& salesIncrease);
void empBonus(double salesIncrease, double& empAmount);
void printBonus(double storeAmount, double empAmount);

int main()
{
	char keepGoing = 'y';
	double monthlySales, storeAmount, salesIncrease, empAmount;
	cout << "Store and Employee Bonus Program. v1.0\nAuthor: Daniel Zelfo\n";

	while (keepGoing == 'y')
	{
		getSales(monthlySales);
		storeBonus(monthlySales, storeAmount);
		getIncrease(salesIncrease);
		empBonus(salesIncrease, empAmount);
		printBonus(storeAmount, empAmount);
		cout << "\nDo you want to run the program again? (y for yes) ";
		cin >> keepGoing;
	}
	cout << "\nThank you for using my program\n";
	return 0;
}

void getSales(double& monthlySales)
{
	cout << "\nEnter the total sales for the month: ";
	cin >> monthlySales;
}

void storeBonus(double monthlySales, double& storeAmount)
{
	if (monthlySales >= 100000)
		storeAmount = 5000;
	else
		storeAmount = 500;
}

void getIncrease(double& salesIncrease)
{
	cout << "Enter sales increase (decimal): ";
	cin >> salesIncrease;
}

void empBonus(double salesIncrease, double& empAmount)
{
	if (salesIncrease >= 0.04)
		empAmount = 50;
	else
		empAmount = 0;
}

void printBonus(double storeAmount, double empAmount)
{
	cout << "The store bonus is $" << storeAmount << endl;
	cout << "The employee bonus is $" << empAmount << endl;
}
