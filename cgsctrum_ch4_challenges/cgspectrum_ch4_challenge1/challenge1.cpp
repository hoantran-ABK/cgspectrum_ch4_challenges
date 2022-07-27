#include <iostream>
#include <random>

using namespace std;

int MaxElement(int numbers[], int size)
{
	int MaxElem;
	
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			MaxElem = numbers[i];
		}

		if (numbers[i] > MaxElem)
		{
			MaxElem = numbers[i];
		}
	}

	return MaxElem;

}


int main()
{
	const int SIZE = 20;
	int test[SIZE] = {};

	// populate array with random integers 0-99
	for (int i = 0; i < SIZE; i++)
	{
		test[i] = rand() % 100;
	}

	// print out for checking correctness
	for (int i = 0; i < SIZE; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;
	cout << MaxElement(test, SIZE);
}