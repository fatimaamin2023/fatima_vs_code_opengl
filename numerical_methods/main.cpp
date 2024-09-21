#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

// int main(int argc, char** argv){

int main()
{
	cout << "Hello, World!" << endl;

	// Write down the output of the following loop

	int i;
	int j;
	int k;
	double multiplier = 1;
	// int a[][];
	// int a =int[10][10];// is an array of 3 elements of arrays of 2 elements.

	double array[5][5];

	double a[7][6] = {
		// {1, 1, 1, 1, 1},
		// {1, 1, 1, 1, 1},
		// {1, 1, 1, 1, 1},
		// {1, 1, 1, 1, 1},
		// {1, 1, 1, 1, 1},
	};

	cout << "a: " << a << " endl " << endl;

	int rows = sizeof(a) / sizeof(a[0]);
	int cols = sizeof(a[0]) / sizeof(a[0][0]);

	cout << "Number of rows: " << rows << endl;
	cout << "Number of columns: " << cols << endl;

	cout << "a[0]: " << a[0] << endl;
	cout << "a[0][0]: " << a[0][0] << endl;
	cout << "sizeof(a[0]: " << sizeof(a[0]) << endl;

	cout << "at address: a[0]: " << *a[0] << endl;

	cout << "-----------------------------" << endl;

	cout << "multiplier: " << multiplier << endl;
	cout << "contents at address a: " << *a << endl;
	cout << "contents at address a: " << *a[0] << endl;

	// Use nested for loops to print the array
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl; // Move to the next line after printing each row
	}

	cout << "j : " << j << endl;
	cout << "i : " << i << endl;
	cout << "k : " << k << endl;

	cout << " BEFORE ABOVE" << endl;
	cout << "-----------------------------" << endl;


	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			if (i != j)
			{
				multiplier = a[j][i] / a[i][i];

				for (k = 1; k <= 5; k++)
				{
					a[j][k] = a[j][k] - multiplier * a[i][k];
				}
			}
		}

		// return 0;
	}


	cout << "AFTER below" << endl;
	cout << "-----------------------------" << endl;
	cout << "multiplier: " << multiplier << endl;
	cout << "contents at address a: " << *a << endl;

	// Use nested for loops to print the array
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl; // Move to the next line after printing each row
	}

	cout << "j : " << j << endl;
	cout << "i : " << i << endl;
	cout << "k : " << k << endl;

	cout << "before returning 0: " << "___" << endl;

	return 0;
}
