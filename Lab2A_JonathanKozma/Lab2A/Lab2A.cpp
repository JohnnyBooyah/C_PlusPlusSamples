// Lab2A.cpp : Defines the entry point for the console application.
// Date: January 25, 2016
// Programmer: Jonathan Kozma
//
// Description: The purpose of this code is meant to compare the user's salary
// to a salary of one of five cities. The user picks which city to compare their
// salary to the median salary of said city. This is done through asking for salary input,
// prompting the user to pick one of five options, going through a switch statement, each
// with their set of if and if else statements. Based off what option number picks, determines
// what case will execute. The if statements check to if the user's salary is bigger, smaller, or
// the same as the median salary for the city. If no valid option is input, the switch statement
// will default and tell the user so.
//////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//constant variables
	const int Santa = 100050; //median salary
	const int Bethesda = 96020; //median salary 
	const int Anniston = 89740; //median salary
	const int Durham = 84910; //median salary
	const int Lawrence = 80840; //median salary

	double salary; //User's salary.
	char choice; //User's selected option
	double median; //User's salary compared to the salary of the selected city.

	cout << "Please enter your current salary: $"; //ask for user's salary
	cin >> salary; //store user's salary

	//Display city options to user.
	cout << endl << "Option 1: Santa Fe, New Mexico" << endl;
	cout << "Option 2: Bethesda, Maryland" << endl;
	cout << "Option 3: Anniston, Alabama" << endl;
	cout << "Option 4: Durham, North Carolina" << endl;
	cout << "Option 5: Lawrence and Salem, Massachusetts" << endl << endl;

	cout << "Please select a city from the above list (option 1-5): "; //ask for an option choice.
	cin >> choice; //store user's option choice.

	switch(choice) { //Based on user input for option choice, execute one of the following.
	
	case '1': //Execute one of the following if statements if the user has selected option 1.
		cout << endl << "You have entered a salary of $" << salary << " and selected option: " 
	<< choice << " for the city." << endl;
	
		if (salary<Santa){ //If user salary is smaller than city salary do this:
			int median = Santa - salary;
			cout << "The median salary for this city is $" << Santa <<
				". You are currently earning $" << median <<
				" below the median salary." << endl;
		}
		else if (salary > Santa) { //If user salary is bigger than city salary do this:
			int median = salary - Santa;
			cout << "The median salary for this city is $" << Santa <<
				". You are currently earning $" << median <<
				" above the median salary." << endl;
		}
		else if (salary == Santa) { //If user salary is equal to city salary do this:
			cout << "The median salary for this city is $" << Santa <<
				". You are currently earning the same salary" << endl;
		}
	break; //end of case.
	
	case '2': //Execute one of the following if statements if the user has selected option 2.
		cout << endl << "You have entered a salary of $" << salary << " and selected option: "
			<< choice << " for the city." << endl;

		if (salary<Bethesda) { //If user salary is smaller than city salary do this:
			int median = Bethesda - salary;
			cout << "The median salary for this city is $" << Bethesda <<
				". You are currently earning $" << median <<
				" below the median salary." << endl;
		}
		else if (salary > Bethesda) { //If user salary is bigger than city salary do this:
			int median = salary - Bethesda;
			cout << "The median salary for this city is $" << Bethesda <<
				". You are currently earning $" << median <<
				" above the median salary." << endl;
		}
		else if (salary == Bethesda) { //If user salary is equal to city salary do this:
			cout << "The median salary for this city is $" << Bethesda <<
				". You are currently earning the same salary" << endl;
		}
		break; //end of case.

	case '3': //Execute one of the following if statements if the user has selected option 3.
		cout << endl << "You have entered a salary of $" << salary << " and selected option: "
			<< choice << " for the city." << endl;

		if (salary<Anniston) { //If user salary is smaller than city salary do this:
			int median = Anniston - salary;
			cout << "The median salary for this city is $" << Anniston <<
				". You are currently earning $" << median <<
				" below the median salary." << endl;
		}
		else if (salary > Anniston) { //If user salary is bigger than city salary do this:
			int median = salary - Anniston;
			cout << "The median salary for this city is $" << Anniston <<
				". You are currently earning $" << median <<
				" above the median salary." << endl;
		}
		else if (salary == Anniston) { //If user salary is equal to city salary do this:
			cout << "The median salary for this city is $" << Anniston <<
				". You are currently earning the same salary" << endl;
		}
		break; //end of case.

	case '4': //Execute one of the following if statements if the user has selected option 4.
		cout << endl << "You have entered a salary of $" << salary << " and selected option: "
			<< choice << " for the city." << endl;

		if (salary<Durham) { //If user salary is smaller than city salary do this:
			int median = Durham - salary;
			cout << "The median salary for this city is $" << Durham <<
				". You are currently earning $" << median <<
				" below the median salary." << endl;
		}
		else if (salary > Durham) { //If user salary is bigger than city salary do this:
			int median = salary - Durham;
			cout << "The median salary for this city is $" << Durham <<
				". You are currently earning $" << median <<
				" above the median salary." << endl;
		}
		else if (salary == Durham) { //If user salary is equal to city salary do this:
			cout << "The median salary for this city is $" << Durham <<
				". You are currently earning the same salary" << endl;
		}
		break; //end of case.

	case '5': //Execute one of the following if statements if the user has selected option 5.
		cout << endl << "You have entered a salary of $" << salary << " and selected option: "
			<< choice << " for the city." << endl;

		if (salary<Lawrence) { //If user salary is smaller than city salary do this:
			int median = Lawrence - salary;
			cout << "The median salary for this city is $" << Lawrence <<
				". You are currently earning $" << median <<
				" below the median salary." << endl;
		}
		else if (salary > Lawrence) { //If user salary is bigger than city salary do this:
			int median = salary - Lawrence;
			cout << "The median salary for this city is $" << Lawrence <<
				". You are currently earning $" << median <<
				" above the median salary." << endl;
		}
		else if (salary == Lawrence) { //If user salary is equal to city salary do this:
			cout << "The median salary for this city is $" << Lawrence <<
				". You are currently earning the same salary" << endl;
		}
		break; //end of case.
	
	default: //If invalid option is selected display the following:
		cout << endl << "You have entered an invalid option." << endl;
	}

	system("pause");
    return 0;
}

