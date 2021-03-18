/*
	Project 1.3: Strings-With-Pointers
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


//functions with pointers

//concatenates the two strings with pointers
void concatenateStringsP (string &a, string &b) 
{
	string total;
	total = a + b;
	cout << "The concatenated string is: " << total << endl;
}

//compares string content with pointers
void compareStringContentP (string &a, string &b) 
{
	if (a.compare(b) == 0)
	{
		cout << a << " and " << b << " are the same!" << endl;
	}
	else
	{
		cout << a << " and " << b << " are not the same." << endl;
	}
}

//compares string length with pointers
void compareStringLengthP (string &a, string &b) 
{
	int aSize = a.size();
	int bSize = b.size();

	if (aSize == bSize)
	{
		cout << a << " and " << b << " are the same length!" << endl;
	}
	else if (aSize > bSize)
	{
		cout << a << " is larger than " << b << "!" << endl;
	}
	else
	{
		cout << b << " is larger than " << a << "!" << endl;
	}
}


//functions without pointers

//concatenates the two strings without pointers
void concatenateStrings (string a, string b)
{
	string total;
	total = a + b;
	cout << "The concatenated string is: " << total << endl;
}

//compares string content without pointers
void compareStringContent (string a, string b) 
{
	if (a.compare(b) == 0) 
	{
		cout << a << " and " << b << " are the same!" << endl;
	}
	else 
	{
		cout << a << " and " << b << " are not the same." << endl;
	}

}

//compares string length without pointers
void compareStringLength (string a, string b) 
{
	int aSize = a.size();
	int bSize = b.size();

	if (aSize == bSize) 
	{
		cout << a << " and " << b << " are the same length!" << endl;
	}
	else if (aSize > bSize) 
	{
		cout << a << " is larger than " << b << "!" << endl;
	}
	else 
	{
		cout << b << " is larger than " << a << "!" << endl;
	}

}


int main () 
{

	//initialize variables
	string s1, s2;
	string* ptr1;
	string* ptr2;
	ptr1 = (&s1);
	ptr2 = (&s2);
	int userOperation;
	char userChoice;
	char userPointerChoice;


	//take user input
	cout << "Enter string 1: " << endl;
	getline(cin, s1);

	cout << "Enter string 2: " << endl;
	getline(cin, s2);


	//asks user to perform operation, repeats until user exits program
	do 
	{
		//asks user whether or not they want to perform the function using strings
		cout << "Would you like to use pointers for your operation? (y/n): " << endl;
		cin >> userPointerChoice;

		if (userPointerChoice == 'y' || userPointerChoice == 'Y') 
		{
			//allow user to choose an operation
			cout << "String Operations:" << endl;
			cout << "------------------\n";
			cout << "1. Concatenate Strings \n";
			cout << "2. Compare String Content\n";
			cout << "3. Compare String Length\n";
			cout << "4. Exit\n" << endl;
			cin >> userOperation;

			//verify user input
			if (userOperation < 1 || userOperation > 4)
			{
				cout << "Error: That is not a valid option!" << endl;
			}

			switch (userOperation) 
			{
				case 1: 
				{
					concatenateStringsP(*ptr1, *ptr2);
					break;
				}
				case 2: 
				{
					compareStringContentP(*ptr1, *ptr2);
					break;
				}
				case 3: 
				{
					compareStringContentP(*ptr1, *ptr2);
					break;
				}
				case 4: 
				{
					cout << "Exiting program..." << endl;
					exit(1);
				}
				default: 
				{
					cout << "Error: That is not a valid option!" << endl;
				}
			}
		}
		else if(userPointerChoice == 'n' || userPointerChoice == 'N')
		{
			//allow user to choose an operation
			cout << "String Operations:" << endl;
			cout << "------------------\n";
			cout << "1. Concatenate Strings \n";
			cout << "2. Compare String Content\n";
			cout << "3. Compare String Length\n";
			cout << "4. Exit\n" << endl;
			cin >> userOperation;

			//verify user input
			if (userOperation < 1 || userOperation > 4) 
			{
				cout << "Error: That is not a valid option!" << endl;
			}

			//use switch statement to call function based on user's input
			switch (userOperation)
			{
				case 1: 
				{
					concatenateStrings(s1, s2);
					break;
				}
				case 2:
				{
					compareStringContent(s1, s2);
					break;
				}
				case 3: 
				{
					compareStringLength(s1, s2);
					break;
				}
				case 4: 
				{
					cout << "Exiting program..." << endl;
					exit(1);
					break;
				}
				default: 
				{
					cout << "Error: That is not a valid option!" << endl;
					break;
				}
			}
		}
		else 
		{
			cout << "Error: You did not select one of the options" << endl;
		}

		//asks user if they want to run the program again
		cout << "Would you like to perform another operation? (y/n): " << endl;
		cin >> userChoice;

	} while (userChoice == 'y' || userChoice == 'Y');

	cout << "Exiting program..." << endl;

	return 0;

}