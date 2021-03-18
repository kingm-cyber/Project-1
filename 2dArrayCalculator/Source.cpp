/*
	Project 1.2: 2dArrayCalculator
	Created by: Matthew King
	SEC.205 C++
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>

using namespace std;

//functions

//prints the array in a grid view
void printArray (float **array, int row, int col) 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << " [" << fixed << setprecision(1) << float (array[i][j]) << "] ";
		}
		cout << "\n" << endl;
	}
}

//adds the values in the arrays together
float** addArrays (float** array1, float** array2, int row, int col) 
{
	//intialize variables to hold the sum of values between the two arrays
	float array1Num;
	float array2Num;
	float arraySum;
	
	//initialize the array that will hold the values after addition
	float** arrayTotal;
	arrayTotal = new float* [row];
	for (int r = 0; r < row; r++) 
	{
		arrayTotal[r] = new float[col];
	}

	//parse through both arrays, add the values at the same locations, and then add that sum to a new array
	for (int r = 0; r < row; r++) 
	{
		for (int c = 0; c < col; c++) 
		{
			//assigns the values from the same locations in array1 and array2 to floating point variables
			array1Num = array1[r][c];
			array2Num = array2[r][c];

			//adds the sum of the two floating point variables to a separate floating point variable
			arraySum = array1Num + array2Num;

			//assigns that sum the same location in a different array
			arrayTotal[r][c] = arraySum;

		}
	}

	return arrayTotal;

}

//subtracts the values in the arrays
float** subtractArrays (float** array1, float** array2, int row, int col) 
{
	//intialize variables to holds of values of the arrays, and the final product after subtraction
	float array1Num;
	float array2Num;
	float arrayProduct;

	//initialize the array that will hold the values after subtraction
	float** arrayTotal;
	arrayTotal = new float* [row];
	for (int r = 0; r < row; r++)
	{
		arrayTotal[r] = new float[col];
	}

	//parse through both arrays, subtract the values at the same locations, and then add that sum to a new array
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			//assigns the values from the same locations in array1 and array2 to floating point variables
			array1Num = array1[r][c];
			array2Num = array2[r][c];

			//add the product of the two floating point variables to a separate floating point variable
			arrayProduct = array1Num - array2Num;

			//assigns that sum the same location in a different array
			arrayTotal[r][c] = arrayProduct;

		}
	}

	return arrayTotal;

}

//multiplies the values in the arrays together
float** multiplyArrays (float** array1, float** array2, int row, int col)
{
	//intialize variables to holds of values of the arrays, and the final product after multiplication
	float array1Num;
	float array2Num;
	float arrayProduct;

	//initialize the array that will hold the values after multiplication
	float** arrayTotal;
	arrayTotal = new float* [row];
	for (int r = 0; r < row; r++)
	{
		arrayTotal[r] = new float[col];
	}

	//parse through both arrays, multiply the values at the same locations, and then add that sum to a new array
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			//assigns the values from the same locations in array1 and array2 to floating point variables
			array1Num = array1[r][c];
			array2Num = array2[r][c];

			//add the product of the two floating point variables to a separate floating point variable
			arrayProduct = array1Num * array2Num;

			//assigns that sum the same location in a different array
			arrayTotal[r][c] = arrayProduct;

		}
	}

	return arrayTotal;

}

//divides the values in the arrays
float** divideArrays (float** array1, float** array2, int row, int col)
{
	//intialize variables to holds of values of the arrays, and the final product after division
	float array1Num;
	float array2Num;
	float arrayProduct;

	//initialize the array that will hold the values after division
	float** arrayTotal;
	arrayTotal = new float* [row];
	for (int r = 0; r < row; r++)
	{
		arrayTotal[r] = new float[col];
	}

	//parse through both arrays, divide the values at the same locations, and then add that sum to a new array
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			//assigns the values from the same locations in array1 and array2 to floating point variables
			array1Num = array1[r][c];
			array2Num = array2[r][c];

			//adds the sum of the two floating point variables to a separate floating point variable
			arrayProduct = array1Num / array2Num;

			//assigns that sum the same location in a different array
			arrayTotal[r][c] = arrayProduct;

		}
	}

	return arrayTotal;

}

//takes in the array total and resets all of the values to 0 after doing an operation
float** resetArray (float** array, int row, int col) 
{
	//parses through the array and resets all of the values to 0
	for (int r = 0; r < row; r++) 
	{
		for (int c = 0; c < col; c++) 
		{
			array[r][c] = 0;
		}
	}

	return array;

}

int main () 
{
	//initialize variables
	int row;
	int col;
	int userOperation;
	char userChoice;
	float inputA;
	float inputB;


	//ask user for number of rows and columns
	cout << "How many rows do you want in your arrays? (1-100): " << endl;
	cin >> row;
	cout << "How many columns do you want in your arrays? (1-100): " << endl;
	cin >> col;


	//declare the 2d arrays of pointers (using array of pointers because size is dynamic)
	float** arrayA;
	float** arrayB;
	float** arrayFinal;


	//create pointer to the rows
	arrayA = new float* [row];
	arrayB = new float* [row];
	arrayFinal = new float* [row];


	//storing resulting pointer inside the element of the array
	for (int r = 0; r < row; r++) 
	{
		arrayA[r] = new float[col];
	}

	for (int r = 0; r < row; r++)
	{
		arrayB[r] = new float[col];
	}

	for (int r = 0; r < row; r++)
	{
		arrayFinal[r] = new float[col];
	}

	//verifying user input
	if (row <= 0 || col <= 0) 
	{
		cout << "Eror: That is not a valid input!" << endl;
		exit(1);
	}

	if (row > 100 || col > 100) 
	{
		cout << "Error: That is not a valid input!" << endl;
		exit(1);
	}
	

	//prompts and takes user input for arrayA
	cout << "Please enter floating point values for the Array 1: \n" << endl;

	for(int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Enter a number for array[" << (i + 1) << "][" << (j + 1) << "]: \t";
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
			cout << "Enter a number for array[" << (i + 1) << "][" << (j + 1) << "]: \t";
			cin >> inputB;
			arrayB[i][j] = inputB;
		}
	}


	//runs the calculator display, performs an operation chosen by the user, then prompts user to either choose another operation or exit the program
	do 
	{
		//prints out the user's two arrays
		cout << "\nArray 1: \n" << endl;
		printArray(arrayA, row, col);
		cout << "Array 2: \n" << endl;
		printArray(arrayB, row, col);
		
		//ask user to select an operation
		cout << "Select an operation that you would like to complete on your calculator (1-4): \n";
		cout << "-----------------------------------------------------------------------------\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << "5. Exit\n" << endl;
		cin >> userOperation;

		cout << "Output: \n" << endl;

		//verifies user option
		if (userOperation < 1 || userOperation > 5) 
		{
			cout << "Error: That is not a valid option! \n" << endl;
		}

		//switch statement that performs a function based on the user's previous input
		switch (userOperation)
		{
		case 1:
		{
			arrayFinal = addArrays(arrayA, arrayB, row, col);
			printArray(arrayFinal, row, col);
			resetArray(arrayFinal, row, col);
			break;
		}
		case 2:
		{
			arrayFinal = subtractArrays(arrayA, arrayB, row, col);
			printArray(arrayFinal, row, col);
			resetArray(arrayFinal, row, col);
			break;
		}
		case 3:
		{
			arrayFinal = multiplyArrays(arrayA, arrayB, row, col);
			printArray(arrayFinal, row, col);
			resetArray(arrayFinal, row, col);
			break;
		}
		case 4:
		{
			arrayFinal = divideArrays(arrayA, arrayB, row, col);
			printArray(arrayFinal, row, col);
			resetArray(arrayFinal, row, col);
			break;
		}
		case 5: cout << "Exiting program..." << endl; 
			exit(1);
		}

		//asks the user if they would like to run the program again
		cout << "Would you like to do another operation? (y/n): " << endl;
		cin >> userChoice;
		
	} while (userChoice == 'y' || userChoice == 'Y' );
	
	cout << "Exiting program..." << endl;

	return 0;

}

