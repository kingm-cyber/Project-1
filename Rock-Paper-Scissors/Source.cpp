/*
	Project 1.1: Rock-Paper-Scissors program
	Created by: Matthew King
	SEC.205 C++
*/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string usercheck;

	//use a do while loop to allow the user to play over and over again

	//user receives a response to begin playing
	cout << "Hello Player! Are you ready to play Rock-Paper-Scissors? (y/n)" << endl;
	getline(cin, usercheck);

	if(usercheck == "y")
	{
		cout << "program beginning..." << endl;
	}
	else if(usercheck == "n")
	{
		cout << "guess you don't get to play..." << endl;
	}
	else 
	{
		cout << "ERROR! you didn't enter in one of the two options!" << endl;
	}


	//cout << "you entered: " << startinput << endl;
	
	return 0;







	//user is prompted to input a value to represent rock, paper, or scissors


}