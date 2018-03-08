#include <iostream>

//file stream
#include <fstream>


using namespace std;

int main()
{

	//Commented code for making a 1 dimensional array with a size of 10 and finding the total and average
		// int numbers[10];

		// for(int i = 0;  i < 10; i++)
		// {
		// 	cout << "Enter a number: ";
		// 	cin >> numbers[i];
		// }
		// int total = 0;
		// for(int i = 0;  i < 10; i++)
		// {
		// 	total += numbers[i];
		// }
		// cout << "The total is: " << total << endl;
		// cout << "The average is: " << total / 10;


	//Create a 2D char array and displays it
	char myArray[10][10];

	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			myArray[i][j] = 'X';
		}
	}

	cout << "  0 1 2 3 4 5 6 7 8 9" << endl;

	for(int i = 0; i < 10; i++)
	{
		cout << i << " ";
		for(int j = 0; j < 10; j++)
		{
			cout << myArray[i][j] << " ";
		}
		cout << "\n";
	}

	// for(int i = 0;  i < 10; i++)
	// {
	// 	cout << numbers[i] << endl;
	// }

}