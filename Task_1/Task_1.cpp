// Task 1. Implement a function that replaces all occurrences of a substring in a string with another substring.
// For example, for the string "hello world", replacing the substring "Ilo" with "y" should return the string "hey world".
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	string s1 = "Hello World";	// First string

	string s2 = "y";			// Second string
	
	cout << s1 << endl;			// Out first string

	s1.replace(2, 3, s2);		// Replaces the three elements of the first string with the second string. Starting after the second character

	cout << s1 << endl;			// Out first string, after replacing
	*/

	string s1 = "Hello World";	// First string
	string s2;					// String to find
	string s3;					// Second string

	cout << "\n\n\t" << s1 << endl;	// Out first string

	cout << "\n\tEnter the characters to be replaced\n\t";	cin >> s2;
	cout << "\n\tEnter new characters to replace\n\t"; cin >> s3;

	int len = s2.length();		// Determinate length of entered string
	int pos = s1.find(s2);		// Find entered string is first string

	s1.replace(pos, len, s3);		// Replaces elements of the first string with the second string.

	cout << "\n\n\t" << s1 << endl;			// Out first string, after replacing
}