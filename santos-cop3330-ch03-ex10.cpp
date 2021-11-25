/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ernesto Santos
 */


#include <iostream>
using namespace std;

int main()
{
	double num1, num2, result;
	bool isValid = true;
	string operation;

	cout << "Please enter an operation followed by two operands: ";
	cin >> operation >> num1 >> num2;

	if (operation == "+" || operation == "plus")
	{
		result = num1 + num2;
	}
	else if (operation == "-" || operation == "minus")
	{
		result = num1 - num2;
	}
	else if (operation == "*" || operation == "mul")
	{
		result = num1 * num2;
	}
	else if (operation == "/" || operation == "div")
	{
		result = num1 / num2;
	}
	else
	{
		cout << "Operation was not valid";
		isValid = false;
	}

	if (isValid)
		cout << "Result: " << result << "\n\n";
}


/* Ex10
* Write a program that takes an operation followed by
two operands and outputs the result. For example: + 100
3.14
* 4 5
Read the operation into a string called operation and
use an if-statement to figure out which operation the
user wants, for example, if (operation=="+"). Read the
operands into variables of type double. Implement this
for operations called +, –, *, /, plus, minus, mul, and div
with their obvious meanings.
*/