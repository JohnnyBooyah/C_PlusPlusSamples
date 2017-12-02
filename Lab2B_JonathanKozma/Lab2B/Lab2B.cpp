// Lab2B.cpp : Defines the entry point for the console application.
// Date: January 28, 2017
// Programmer: Jonathan Kozma
//
// Description: The purpose of this code is to ask the user what they would like to eat from a list of 5
// main dishes, followed by asking them to choose from one of three extras. Using a switch statement
// for the main dishes followed by a switch statement for the extras. After each switch statement,
// data is output to the user on what they have selected. Using the assert function to test whether
// the user has input a valid option to continue on. If not the assert function will take the user to
// the line of code to which a rule was broken i.e. the assertion being stated.
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include <string>

using namespace std;

int main()
{	
	//Variables
	string main = ""; //To hold main dishes.
	string extra = ""; //to hold extras.

	int choice = 0; //set choice to 0.

	cout << "Welcome to Bob's Burgers! " << endl;
	
	//Display main dish options.
	cout << "1: Cheeseburger" << endl;
	cout << "2: Hotdog" << endl;
	cout << "3: Chicken Wings" << endl;
	cout << "4: Chili" << endl;
	cout << "5: Salad" << endl;

	cout << "What would you like to eat (1-5): "; //ask for main dish choice.
	cin >> choice; //store main dish choice.

	switch (choice) { //Execute one of the following cases based on user main dish selection.
	case 1: main = "a cheeseburger"; //Execute if user selects option 1 for main dish.
		break; //End of case for main option 1.

	case 2: main = "a hotdog"; //Execute if user selects option 2 for main dish.
		break; //End of case for main option 2.

	case 3: main = "chicken wings"; //Execute if user selects option 3 for main dish.
		break; //End of case for main option 3.

	case 4: main = "chili"; //Execute if user selects option 4 for main dish.
	break; //End of case for main option 4.

	case 5: main = "a salad"; //Execute if user selects option 5 for main dish.
		break; //End of case for main option 5.

	default: cout << endl << "Invalid choice." << endl << endl; //Execute if user inputs a number not between 1-5.
		break; //End of default.
	} //End main dish switch statement.

	assert(choice >= 1 && choice <= 5); //Make sure choice was valid.

	cout << endl << "You have selected " << main << "." << endl; //output user selection.

	//Display extra options.
	cout << endl << "1: No extras." << endl;
	cout << "2: Drink." << endl;
	cout << "3: Drink + side." << endl;

	cout << "Select an option from the above list: "; //Ask for extra choice
	cin >> choice; //store extra choice.

	switch (choice) { //Execute one of the following based on user extra selection.
	case 1: extra = "no extras."; //Execute if user inputs 1.
		break; //End of case 1.
	case 2: extra = "a drink."; //Execute if user inputs 2.
		break; //End of case 2.
	case 3: extra = "a drink + side."; //Execute if user inputs 3.
		break; //End of case 3.
	default: cout << endl << "Invalid choice." << endl << endl; //Execute if user inputs a number not between 1-3.
		break; //End of default.
	}

	assert(choice >= 1 && choice <= 3); //Make sure choice was valid.
	
	cout << endl << "You have selected " << main << " and " << extra; //Display choices to user.
	cout << endl << "Thanks for dining with us!" << endl;

	system("pause"); //To keep window open.
    return 0;
}

