#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
	long long ISBN;    // long long  must be used as ISBN are 13 digits
	string title;
	string author;
	string category;
	int ID;
	string readerName;
	int startDate;
	int expDate;

public:
	// Constructors:
	Book(long long a, string b, string c, string d, int e, string f, int g, int h);
	Book(long long a, string b, string c, string d, int e);// the readerName, startDate, and expDate is only needed when the book has been borrowed

	void returnBook();

	void setISBN(long long x);
	void setTitle(string x);
	void setAuthor(string x);
	void setCategory(string x);
	void setID(int x);				// Setters
	void setName(string x);
	void setStartDate(int x);
	void setExpDate(int x);
	
	// Getters
	long long getISBN();
	string getTitle();
	string getAuthor();
	string getCategory();			
	int getID();
	string getName();
	int getStartDate();
	int getExpDate();
};