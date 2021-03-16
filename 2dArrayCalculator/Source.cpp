/*
	Project 1.2: 2dArrayCalculator
	Created by: Matthew King
	SEC.205 C++
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>


using namespace std;

//functions
//prints the array in a grid view
void printArray (float (*array)[100], int row, int col) 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "  " << array[i][j];
		}
		cout << "\n" << endl;
	}
}

//adds the values in the arrays together
/*
float addArrays () 
{
	
}
*/

//subtracts the values in the arrays


//multiplies the values in the arrays together


//divides the values in the arrays


int main () 
{
	//initialize variables
	int row;
	int col;
	int userOperation;
	float inputA;
	float inputB;
	float arrayA[100][100];
	float arrayB[100][100];
	float arrayFinal[100][100];

	/*
		INITIALIZE ARRAY OF POINTERS, SO THAT 2D ARRAYS CAN BE RETURNED FROM FUNCTIONS
		CREATE 4 OPERATION FUNCTIONS
		FIX DO WHILE LOOP TO RUN UNTIL USER EXITS
	*/

	//ask user for number of rows and columns
	cout << "How many rows do you want in your arrays? (1-100): " << endl;
	cin >> row;
	cout << "How many columns do you want in your arrays? (1-100): " << endl;
	cin >> col;


	//verify user input
	if (row <= 0 || col <= 0 ) 
	{
		cout << "Eror: You cannot have an array with negative borders!" << endl;
		exit(1);
	}
	else if (row > 100 || col > 100) 
	{
		cout << "Error: The size of your array is too large!" << endl;
		exit(1);
	}
	

	//prompts and takes user input for arrayA
	cout << "Please enter floating point values for the Array 1: \n" << endl;

	for(int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Enter a number for array[" << i << "][" << j << "]: \t";
			cin >> inputA;
			arrayA[i][j] = inputA;
		}
	}
	
	//prompts and takes user input for arrayB
	cout << "Please enter 9 floating point values for the first 2d array: \n" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter a number for array[" << i << "][" << j << "]: \t";
			cin >> inputB;
			arrayB[i][j] = inputB;
		}
	}


	//this can be used for printing the values of the array in a grid view
	printArray(arrayA, row, col);
	printArray(arrayB, row, col);


	do 
	{
		//ask user to select an operation
		cout << "Select an operation that you would like to complete on your calculator (1-4): ";
		cout << "-----------------------------------------------------------------------------";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << "5. Exit" << endl;
		cin >> userOperation;

	/*
		switch (userOperation)
		{
		case 1: addArrays();
			break;
		case 2: subtractArrays();
			break;
		case 3: multiplyArrays();
			break;
		case 4: cout << "Dividing arrays...\n" << divideArrays() << endl;
			printArray(//takes in the array final);
			break;
		case 5: cout << "Exiting program..." << endl; 
			exit(1);
		}
		*/
	} while (userOperation > 0 && userOperation < 6);
		
}

