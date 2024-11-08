/*  Project 2
    Name: Stephany Murillo Munoz and Andrewdai Truong
    Algorithm 1: Trick-or-Treat House Wait Times
    Class: CPSC-335-06
-------------------------------------------------------*/

#include <iostream>
using namespace std;

// function prototypes
void displayArr(int arr[], int numElements);
void moreCandy(int hCandies[], int wHouses[], int numHouses);
void displayhCandies(int houseCandies[], int numHouses);

int main()
{
	// Test cases
	// Sample 1 input
	int n = 8;
	int inputOne[n] = {3, 5, 8, 2, 1, 4, 10, 6};
	int waitHouses1[n];
	displayhCandies(inputOne, n);
	moreCandy(inputOne, waitHouses1, n);

	// Sample 2 input
	int m = 4;
	int inputTwo[m] = {2, 4, 6, 9};
	int waitHouses2[m];
	displayhCandies(inputTwo, m);
	moreCandy(inputTwo, waitHouses2, m);

	// Sample 3 input
	int p = 5;
	int inputThree[p] = {7, 9, 8, 5, 11};
	int waitHouses3[p];
	displayhCandies(inputThree, p);
	moreCandy(inputThree, waitHouses3, p);	

	return 0;
}

// displayhCandies displays houseCandies array
void displayhCandies(int houseCandies[], int numHouses)
{
	// display houseCandies array
	cout << "houseCandies = [";
	displayArr(houseCandies, numHouses);
	cout << "]\n";
}

// moreCandy determines the number of houses you have to visits after the [i]th 
// house to find one that offers more candy
void moreCandy(int houseCandies[], int waitHouses[], int numHouses)
{
	for (int i =0; i < numHouses; i++)
	{
		// initalize i to 0
		waitHouses[i] = 0;
		for (int j = i + 1; j < numHouses; j++)
		{
			if (houseCandies[j] > houseCandies[i])
			{
				// subtract the indexes
				waitHouses[i] = j - i;
				break;
			}	
		}
	}

	// display waitHouses array
	cout << "waitHouses = [";
	displayArr(waitHouses, numHouses);
	cout << "]\n\n";
}

// displayArr displays arrays
void displayArr(int arr[], int numElements)
{
	for (int i = 0; i < numElements; i++)
	{
		if (i == numElements - 1)
		{
			cout << arr[i];	
		}
		else
		{
			cout << arr[i] << ", ";
		}
	}
}

