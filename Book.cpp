#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;

Book::Book(long long a, string b, string c, string d, int e, string f, int g, int h) {
	// This is the construcor for a Book which has been borrowed
	ISBN = a;
	title = b;
	author = c;
	category = d;
	ID = e;
	readerName = f;
	startDate = g;
	expDate = h;
}

Book::Book(long long a, string b, string c, string d, int e) {
	// This is the constructor for a Book that is not being borrowed
	ISBN = a;
	title = b;
	author = c;
	category = d;
	ID = e;
}

void Book::returnBook() {
	// Return Book function is used when the user returns a Book. It resets the reader name and dates preparing it
	// for the next user
	readerName = "";
	startDate = NULL;
	expDate = NULL;
}

// Setters
void Book::setISBN(long long x) {
	ISBN = x;
}

void Book::setTitle(string x) {
	title = x;
}

void Book::setAuthor(string x) {
	author = x;
}

void Book::setCategory(string x) {
	category = x;
}

void Book::setID(int x) {
	ID = x;
}

void Book::setName(string x) {
	readerName = x;
}

void Book::setStartDate(int x) {
	startDate = x;
}

void Book::setExpDate(int x) {
	expDate = x;
}

// Getters
long long Book::getISBN() {
	return ISBN;
}

string Book::getTitle() {
	return title;
}

string Book::getAuthor() {
	return author;
}

string Book::getCategory() {
	return category;
}

int Book::getID() {
	return ID;
}

string Book::getName() {
	return readerName;
}

int Book::getStartDate() {
	return startDate;
}

int Book::getExpDate() {
	return expDate;
}