#include <iostream>
using namespace std;

void Max(int*& matrix, int& max_index, int size)
{
	int max_number = *matrix;
	for (int i = 0; i < size; i++)
	{
		if (*(matrix + i) > max_number && *(matrix + i) % 2 == 0)
		{
			max_number = *(matrix + i);
			max_index = i;
		}
	}
}



void main()
{
	srand(time(NULL));
	int size;
	cout << "matrix size : ";
	cin >> size;
	int* matrix = new int[size];
	for (int i = 0; i < size; i++) *(matrix + i) = rand() % 99 + 1;
	for (int i = 0; i < size; i++) cout << *(matrix + i) << ' ';
	cout << endl;
	int max_index;
	Max(matrix, max_index, size);
	cout << "Max even number in matrix : " << *(matrix + max_index) << endl;
	delete[] matrix;
}