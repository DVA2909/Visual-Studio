#include <iostream>
using namespace std;



void main()
{
	/*
	int kmInDay = 10;
	int days = 0;
	do
	{
		kmInDay += kmInDay / 100 * 10;
		days++;
	} while (kmInDay <= 20);
	cout << "Cherez " << days << "dniv norma bude bilshe 20" << endl;
	*/




	int Vmax;
	cout << "Vmax : "; cin >> Vmax;
	int Vcar, count;
	do
	{
		count++;
		cout << "V" << count << " : "; cin >> Vcar;
		if (Vmax < Vcar) cout << "!!!! PORUSHNYK !!!!" << endl;
		cout << "------------" << endl;
	} while (true);
}