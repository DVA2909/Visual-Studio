#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct DETAL
{
    string Name;
    string Sort;
    struct Date
    {
        int day;
        int month;
        int year;
    } Date;
    int Quant;
    float Cost;
};

bool compareName(const DETAL& detal1, const DETAL& detal2) {
    return detal1.Name > detal2.Name;
}

int main()
{
    int N;
    cout << "Enter detal count: ";
    cin >> N;

    DETAL ZAKAZ[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Detal " << i + 1 << ":\n";
        cout << "Model: ";
        cin >> ZAKAZ[i].Name;
        cout << "Sort: ";
        cin >> ZAKAZ[i].Sort;
        cout << "Create data (day month year): ";
        cin >> ZAKAZ[i].Date.day >> ZAKAZ[i].Date.month >> ZAKAZ[i].Date.year;
        cout << "Count: ";
        cin >> ZAKAZ[i].Quant;
        cout << "Cost: ";
        cin >> ZAKAZ[i].Cost;
    }

    sort(ZAKAZ, ZAKAZ + N, compareName);

    cout << "\nDetal sorted:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "Detal " << i + 1 << ":\n";
        cout << "Model: " << ZAKAZ[i].Name << endl;
        cout << "Sort: " << ZAKAZ[i].Sort << endl;
        cout << "Create data: " << ZAKAZ[i].Date.day << "." << ZAKAZ[i].Date.month << "." << ZAKAZ[i].Date.year << endl;
        cout << "Count: " << ZAKAZ[i].Quant << endl;
        cout << "Cost: " << ZAKAZ[i].Cost << endl;
    }

    int inputDay, inputMonth, inputYear;
    cout << "\nEnter outdata datales (day month year): ";
    cin >> inputDay >> inputMonth >> inputYear;

    cout << "\nDetals I sort, Created without data:\n";
    for (int i = 0; i < N; i++)
    {
        if (ZAKAZ[i].Date.year > inputYear ||
            (ZAKAZ[i].Date.year == inputYear && ZAKAZ[i].Date.month > inputMonth) ||
            (ZAKAZ[i].Date.year == inputYear && ZAKAZ[i].Date.month == inputMonth && ZAKAZ[i].Date.day > inputDay))
        {
            cout << "Detal " << i + 1 << ":\n";
            cout << "Model: " << ZAKAZ[i].Name << endl;
            cout << "Sort: " << ZAKAZ[i].Sort << endl;
            cout << "Create data: " << ZAKAZ[i].Date.day << "." << ZAKAZ[i].Date.month << "." << ZAKAZ[i].Date.year << endl;
            cout << "Count: " << ZAKAZ[i].Quant << endl;
            cout << "Cost: " << ZAKAZ[i].Cost << endl;
        }
    }
}
