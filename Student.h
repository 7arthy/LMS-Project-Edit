#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
	string username;
	string password;
	int maxAllowed;
	int maxTime;
	vector <int> borrowedList;	// This is a list of the books the user has borrowed

public:
	Student(string a, string b, int c, int d, vector <int> e);
	void printStudent();

	// Setters
	void setUsername(string x);
	void setPassword(string x);
	void setMaxAllowed(int x);
	void setMaxTime(int x);
	void setBorrowedList(vector <int> x);

	//Getters
	string getUsername();
	string getPassword();
	int getMaxAllowed();
	int getMaxTime();
	int getListSize();
	int getListValue(int x);

	void borrowBook(int x); // Lets the user borrow a book of ID 'x'
	void returnBook(int x);	// Used when a book is returned
	bool hasBook(int x);	// Checks if the user has a book of ID 'x' already borrowed
	void printList();	// Prints the borrowedList
		// Check the .cpp file for more details

};