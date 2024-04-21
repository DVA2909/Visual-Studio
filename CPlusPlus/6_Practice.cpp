#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	/*
	int r = 6;
	int c = 5;
	int** votes = new int* [r];
	for (int i = 0; i < r; i++)
	{
		*(votes + i) = new int[c];
	}
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			votes[i][j] = (i + 1) * (j + 1);
		}
	}

	cout << "Table of voting results : " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(2) << votes[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	cout << "Number of voters in each locality : " << endl;
	for (int i = 0; i < r; i++)
	{
		int voters = 0;
		for (int j = 0; j < c; j++)
		{
			voters += votes[i][j];
		}
		cout << "Settlement " << (i + 1) << " : " << voters << "voters" << endl;
	}



	for (int i = 0; i < r; i++)
	{
		delete[] * (votes + i);
	}
	delete[] votes;
	*/




	/*
	srand(time(NULL));
	int size = 6;
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		*(matrix + i) = new int[size];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % 26 - 5;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(2) << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i == 0 || j == 0) || (i == size - 1 || j == size - 1))
				sum += matrix[i][j];
		}
	}
	cout << "Summa po perimetru : " << sum << endl;



	for (int i = 0; i < size; i++)
	{
		delete[] * (matrix + i);
	}
	delete[] matrix;
	*/
}