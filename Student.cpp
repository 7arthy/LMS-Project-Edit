#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

Student::Student(string a, string b, int c, int d, vector <int> e) {
	//Constructor
	username = a;
	password = b;
	maxAllowed = c;
	maxTime = d;
	borrowedList = e;
}


void Student::printStudent() {						// This function is for testing
													// It prints all the information on the logged in Student
	cout << "Username: " << username << endl;
	cout << "Password: " << password << endl;
	cout << "maxAllowed: " << maxAllowed << endl;
	cout << "maxTime: " << maxTime << endl;
	cout << "Borrowed List:" << endl;
	for (int i = 0; i < borrowedList.size(); i++) {
		cout << borrowedList[i] << endl;
	}
	cout << endl;
}


void Student::printList() {							//This prints the IDs of all the Students' borrowed books
	for (int i = 0; i < borrowedList.size(); i++) {
		cout << borrowedList[i] << endl;
	}
	cout << endl;
}


bool Student::hasBook(int x) { // int x is a book ID

	for (int i = 0; i < borrowedList.size(); i++) {	// Loops through all the ID's in the Student's list
		if (borrowedList[i] == x)					// returns true if the Student is boring that book
			return true;
	}
	return false;
}

void Student::returnBook(int x) {					//takes 'x' which is a book ID
	for (int i = 0; i < borrowedList.size(); i++) {	//  <----loops through the Student's list of borrowed books
		if (borrowedList[i] == x) {
			borrowedList.erase(borrowedList.begin() + i);    //  Erases it from the list since the Student returned it
		}
	}

	// This can be much more efficient if the book is updated individually here instead of rewriting the files

}
void Student::borrowBook(int x) {     // The Student borrowed a book of ID 'x'
	borrowedList.push_back(x);		// adds that ID to the Students borrowed list
}


//   Set functions below
void Student::setUsername(string x) {
	username = x;
}
void Student::setPassword(string x) {
	password = x;
}
void Student::setMaxAllowed(int x) {
	maxAllowed = x;
}
void Student::setMaxTime(int x) {
	maxTime = x;
}
void Student::setBorrowedList(vector <int> x) {
	borrowedList = x;
}

//    Get functions below
string Student::getUsername() {
	return username;
}
string Student::getPassword() {
	return password;
}
int Student::getMaxAllowed() {
	return maxAllowed;
}
int Student::getMaxTime() {
	return maxTime;
}
int Student::getListValue(int x) {
	return borrowedList[x];
}
int Student::getListSize() {
	return borrowedList.size();
}