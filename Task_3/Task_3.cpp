// Task 3. Implement a function that finds the most repeated character in a string. 
// For example, for the string "hello world" the most repeated character is "l".
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Hello World";

	//cout << "\n\n\tEnter the string to finds the most repeated character\n\n\t"; cin >> s1;

	cout << "\n\n\t" << s1 << "\n\t";

	int len = s1.length();	// Entered string length
	
	for (int i = 0; i < len; i++)	// Cycle for the length of the entered word
	{
		int k = 0;
		for (int j = i; j < len; j++)	
		{
			if ((s1[i] == s1[j]) && (s1[i] != 0))	// Find the repeated character in a string 
			{
				k++;
				if (k > 1)
				{
					s1[j] =  0;
				}
			}
		}
		if (k > 1)	// Out the repeated character in a string 
		{
			cout << "\n\tCharacter \"" << s1[i] << "\" repeated " << k << " times\n";
		}
	}
}