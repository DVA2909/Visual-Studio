#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student
{
    string surname;
    string name;
    string residence;
    string phone;
};

int main()
{
    /*ifstream file("numbers.txt");
    if (!file.is_open())
    {
        cerr << "Error open file." << endl;
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    while (file >> num)
    {
        sum += num;
        count++;
    }

    file.close();

    if (count == 0)
    {
        cerr << "File is empty." << endl;
        return 1;
    }

    double average = static_cast<double>(sum) / count;

    ofstream output_file;
    if (average > 0)
    {
        output_file.open("plus.rez");
    }
    else
    {
        output_file.open("minus.rez");
    }

    if (!output_file.is_open())
    {
        cerr << "Error create output file." << endl;
        return 1;
    }

    output_file << "Average number: " << average << endl;

    output_file.close();*/



    ifstream input_file("students.txt");
    if (!input_file.is_open())
    {
        cerr << "Error open file with students." << endl;
        return 1;
    }

    Student students[30];
    for (int i = 0; i < 30; i++)
    {
        input_file >> students[i].surname >> students[i].name >> students[i].residence >> students[i].phone;
    }

    input_file.close();

    cout << "Students who live at home and have a home phone:" << endl;
    for (int i = 0; i < 30; i++)
    {
        if (students[i].residence == "home" && !students[i].phone.empty())
        {
            cout << students[i].surname << " " << students[i].name << endl;
        }
    }

}
