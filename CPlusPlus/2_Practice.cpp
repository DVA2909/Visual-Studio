#include <iostream>
using namespace std;

enum Month { June = 1, July, August };

void main()
{
	/*
	bool isLezhut = false;
	float x, y;
	cout << "x : "; cin >> x;
	cout << "y : "; cin >> y;
	if (y >= 1 && x < 0 && x > -(y - 1)) isLezhut = true;
	if (-x + y <= 1 && -x > 0 && y > 0) isLezhut = true;
	if (-x >= 1 && y < 0 && y > -(x + 1)) isLezhut = true;
	if (x > 0 && y < 0 && x < -(y - 1)) isLezhut = true;
	if (x > 0 && y > 0 && x + y > 1 && y < x + 1) isLezhut = true;
	if (isLezhut == true) cout << "Lezhut" << endl;
	else cout << "Ne lezhut" << endl;
	*/




	/*
	int a;
	cout << "number : "; cin >> a;
	if (a % 2 == 0) cout << "Parne" << endl;
	else cout << "Ne parne";
	*/




	/*
	double a, june, july, august;
	cout << "price kupalnika : "; cin >> a;
	double p;
	cout << "p% : "; cin >> p;
	double q;
	cout << "q% : "; cin >> q;
	cout << "May : " << a << endl;
	june = a + (a / 100 * p);
	cout << "June : " << june << endl;
	july = a;
	cout << "July : " << july << endl;
	august = a - (a / 100 * q);
	cout << "August : " << august << endl;
	cout << "=================" << endl;
	int choice = 0;
	bool isValidData = true;
	while (choice < 1 || choice > 3)
	{
		if (!isValidData) cout << "Error data. Try again!" << endl;
		isValidData = false;
		cout << "1 - June" << endl;
		cout << "2 - July" << endl;
		cout << "3 - August" << endl;
		cout << "Enter choice : "; cin >> choice;
	}
	switch (choice)
	{
	case Month::June: cout << "June price : " << june << endl;
	case Month::July: cout << "July price : " << july << endl;
	case Month::August: cout << "August price : " << august << endl;
	}
	*/
}