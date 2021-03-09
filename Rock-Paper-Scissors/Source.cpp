/*
	Project 1.1: Rock-Paper-Scissors program
	Created by: Matthew King
	SEC.205 C++
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

//initialize global variables
const int rock = 1;
const int paper = 2;
const int scissors = 3;
int userWins = 0, computerWins = 0;

//function that returns a random number between 1 and 3
int getComputerChoice(void)
{
	srand(time(NULL));
	int randomNumber;

	randomNumber = rand() % 3 + 1;
	
	return randomNumber;
}

//function that deteremines the winner of the game
void getWinner(int userChoice, int computerChoice)
{
	//implement a system using if/else statements to compare who won and print the winner here, there is no returning a value
	if (userChoice == computerChoice)
	{
		cout << "DRAW! Nobody wins this round.\n" << endl;
	}
	else if (userChoice == rock && computerChoice == paper)
	{
		cout << "The computer won this round! Paper beats rock.\n" << endl;
		computerWins += 1;
	}
	else if (userChoice == rock && computerChoice == scissors)
	{
		cout << "You won this round! Rock beats scissors.\n" << endl;
		userWins += 1;
	}
	else if (userChoice == paper && computerChoice == scissors)
	{
		cout << "The computer won this round! Scissors beats paper.\n" << endl;
		computerChoice += 1;
	}
	else if (userChoice == paper && computerChoice == rock)
	{
		cout << "You won this round! Paper beats rock.\n" << endl;
		userWins += 1;
	}
	else if (userChoice == scissors && computerChoice == rock)
	{
		cout << "The computer won this round! Rock beats scissors.\n" << endl;
		computerWins += 1;
	}
	else if (userChoice == scissors && computerChoice == paper)
	{
		cout << "You won this round! Scissors beats paper.\n" << endl;
		userWins += 1;
	}
	else
	{
		cout << "There was an error when trying to calculate a winner..." << endl;
	}
}

int main() 
{
	//initialize variables
	char userCheck;
	int userChoice, computerChoice;

	//user receives a response to begin playing
	cout << "Hello Player! Are you ready to play Rock-Paper-Scissors? (y/n)\n" << endl;
	cin >> userCheck;

	//if user types 'y', the game will begin running
	if (userCheck == 'y' || userCheck == 'Y') 
	{
		do
		{
			cout << "\n------------------------------------------\n";
			cout << "\t\tNEW GAME \n";
			cout << "------------------------------------------" << endl;
			do 
			{
				//take in the value of the user's choice
				cout << "Enter the value of your choice: (1-3)\n";
				cout << "1. Rock\n";
				cout << "2. Paper\n";
				cout << "3. Scissors\n" << endl;
				cin >> userChoice;

				//check to make sure the user's choice is within the boundaries
				if (userChoice < 1 || userChoice > 3)
				{
					cout << "Error: Illegal choice.\n" << "Exiting program...\n" << endl;
					exit(1);
				}

				//function call that generates a random choice for the computer
				computerChoice = getComputerChoice();

				//function call that deteremines the winner of the game
				getWinner(userChoice, computerChoice);
			} while (userWins != 4 && computerWins != 4);

			//print out the results of the game
			cout << "------------------------------------------\n";
			cout << "\t\tGAME OVER\n";
			cout << "------------------------------------------\n" << endl;

			if (userWins > 3) 
			{
				cout << "You won the best of 7 match!\n";
				cout << "User wins:       " << userWins << " \n";
				cout << "Computer wins:   " << computerWins << " \n" << endl;
			}
			else if (computerWins > 3) 
			{
				cout << "The computer won the best of 7 match!\n";
				cout << "User wins:       " << userWins << " \n";
				cout << "Computer wins:   " << computerWins << " \n" << endl;
			}

			//reset the wins back to 0
			userWins = 0;
			computerWins = 0;

			//prompts user to continue playing
			cout << "Would you like to play again? (y/n)\n" << endl;
			cin >> userCheck;
		} while (userCheck == 'y' || userCheck == 'Y');

	}
	
	//this if/else statement is run after the first if statement completes
	if (userCheck == 'n' || userCheck == 'N') 
	{
		cout << "Thank you for playing!\n" << "Exiting program...\n" << endl;
		exit(1);
	}
	else 
	{
		cout << "ERROR! That is not one of the options!\n" << "Exiting program...\n" << endl;
		exit(1);
	}

	return 0;
}


