//#include <iostream>
//using namespace std;
// 
//void Max(int*& matrix, int& max_index, int size)
//{
//	int max_number = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (*(matrix + i) > max_number && *(matrix + i) % 2 != 0)
//		{
//			max_number = *(matrix + i);
//			max_index = i;
//		}
//	}
//}


//int Min(int* matrix, int size)
//{
//	int min_number = *matrix;
//	for (int i = 0; i < size; i++)
//	{
//		if (*(matrix + i) < 0) break;
//		if (*(matrix + i) < min_number) min_number = *(matrix + i);
//	}
//	return min_number;
//}



//void main()
//{
	/*
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
	*/




	/*
	srand(time(NULL));
	int size = 12;
	int* height = new int[size];
	for (int i = 0; i < size; i++) *(height + i) = rand() % 28 + 163;
	for (int i = 0; i < size; i++) cout << *(height + i) << ' ';
	cout << endl;
	*/




	/*
	srand(time(NULL));
	int size = 20;
	int* matrix = new int[size];
	for (int i = 0; i < size; i++) *(matrix + i) = rand() % 41 - 10;
	for (int i = 0; i < size; i++) cout << *(matrix + i) << ' ';
	cout << endl;
	int res(Min(matrix, size));
	cout << "Min element : " << res << endl;
	*/
//}