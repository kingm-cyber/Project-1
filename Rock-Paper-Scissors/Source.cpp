/*
	Project 1.1: Rock-Paper-Scissors program
	Created by: Matthew King
	SEC.205 C++
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	//initialize variables
	string userCheck;

	const int rock = 1;
	const int paper = 2;
	const int scissors = 3;

	int userChoice;
	int computerChoice;

	//user receives a response to begin playing
	cout << "Hello Player! Are you ready to play Rock-Paper-Scissors? (y/n)\n" << endl;
	getline(cin, userCheck);

	if (userCheck == "y" || userCheck == "Y") 
	{
		
		do 
		{
			//take in the value of the user's choice
			cout << "Enter the value of your choice: (1-3)\n";
			cout << "1. Rock";
			cout << "2. Paper";
			cout << "3. Scissors" << endl;
			cin >> userChoice;

			//do a function call to generate the computer's choice

			//do a function call to compare which player 1 based on the user's choice

			//ask the user if they want to play again, allowing them to edit the userCheck string and play again or exit the program

		} while (userCheck == "y" || userCheck == "Y");
	}
	else if (userCheck == "n" || userCheck == "N") 
	{
		cout << "Exiting program...\n" << endl;
		exit(1);
	}
	else 
	{
		cout << "ERROR! you didn't enter in one of the two options!" << endl;
		exit(1);
	}

	return 0;

}

int getComputerChoice (void) 
{
	//implement random selection between numbers 1-3
}

void getWinner (int userChoice, int computerChoice) 
{
	//implement a system using if/else statements to compare who won and print the winner here, there is no returning a value
}