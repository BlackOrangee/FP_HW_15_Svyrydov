// Task 2. Implement a function that converts a string into capitalized form. 
// For example, the string "hello world" should be converted to the string "HELLO WORLD". 
// The task can be implemented using the <string> library.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;

	cout << "\n\n\tEnter the string to capitalize it\n\n\t"; cin >> s1;

	string cap = "ABCDEFGHJKLMNOPQRSTUVWXYZ";	// Big symbols
	string low = "abcdefghjklmnopqrstuvwxyz";	// Small characters

	int len = s1.length();	// Entered string length
	int len2 = low.length();// Character set length

	for (int i = 0; i < len; i++)	// Cycle for the length of the entered word
	{
		for (int j = 0; j < len2; j++)	// Loop for the length of the available character set
		{
			if (s1[i] == low[j])	// Replacing small characters with large ones
			{
				s1[i] = cap[j];
			}
		}
	}
	cout << "\n\n\t" << s1 << endl;	// Output of the processed string
}