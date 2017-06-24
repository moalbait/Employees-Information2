// Fconstruct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;



// struct defenition
struct person {
	string name;
	int ID;
	int phoneNum;
	int Salary;

} Fname, ID, phone, Salry;

void output(person[]);
int main()
{
	person employess[4];
	int i = 0;
	while (i < 4) {

		// asking user to input employees information
		person info;
		cout << "enter Employees name" << endl; // name
		cin >> employess[i].name;
		cout << endl;
		cout << "enter Employees ID" << endl;// ID
		cin >> employess[i].ID;
		cout << endl;
		cout << "enter Employees Phone" << endl; // Phone Number
		cin >> employess[i].phoneNum;
		cout << endl;
		cout << "enter Employees Salary" << endl; // Salary
		cin >> employess[i].Salary;

		i++;

	}
	output(employess); // pass to output your array
	

	return 0;
}

// output content of Employees

void output(person emp[]) {
	int j = 0;
	cout << "Now these information is in your Employees Array" << endl;
	cout << "Name  " << "ID  " << " Phone Number" << "Salary  " << endl;
	while (j < 4) {
		cout << emp[j].name << " " << emp[j].ID << " " << emp[j].phoneNum << " " << emp[j].Salary << endl;
		cout << endl;

		j++;
	}

}

