// Task 4. Implement a function that finds all unique characters in a string. 
// For example, for the string "hello world", the unique characters are "he wrd".
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Hello World";

	cout << "\n\n\t" << s1 << "\n\t";

	int len = s1.length();	// Entered string length

	for (int i = 0; i < len; i++)	// Cycle for the length of the entered word
	{
		int k = 0;
		for (int j = i; j < len; j++)
		{
			if (s1[i] == s1[j])	// Find the repeated character in a string 
			{
				k++;
				if (k > 1)	// Erase the repeated character in a string 
				{
					s1[j] = 0;
				}
			}
		}
		if (k > 1)	// Erase the repeated character in a string 
		{
			s1[i] = 0;
		}
	}
	cout << "\n\n\t\"" << s1 << "\" Is unique characters in a string\n\t";
}