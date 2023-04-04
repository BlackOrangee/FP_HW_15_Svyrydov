// Task 5. Write a function that removes duplicates in an array, 
// truncates the array, and returns a new array with no duplicates.
//

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE] = { 1, 2, 1, 3, 5 };
	int size = SIZE - 1;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])	// Finds duplicatesand moves them to the end of the array
			{
				swap(arr[j], arr[size]);
				size--;
			}
		}
	}
	for (int i = 0; i < size + 1; i++)	// Outputs a truncated array without duplicates
	{
		cout << arr[i] << " ";
	}
}