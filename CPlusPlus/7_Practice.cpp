#include <iostream>
#include <string>
using namespace std;

bool WordCmp(const string& s1, const string& s2)
{
    string clean_s1, clean_s2;

    for (char c : s1)
    {
        if (!isspace(c))
        {
            clean_s1 += c;
        }
    }

    for (char c : s2)
    {
        if (!isspace(c))
        {
            clean_s2 += c;
        }
    }

    return clean_s1 == clean_s2;
}


bool isPalindrome(const string& str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    /*string input;
    cout << "Enter line: ";
    cin >> input;

    if (isPalindrome(input))
    {
        cout << "Line is palindrom.\n";
    }
    else
    {
        cout << "Line is not palindrom.\n";
    }*/


    string s1 = "hello world";
    string s2 = "hello   world";

    if (WordCmp(s1, s2))
    {
        cout << "The lines are identical after ignoring multiple blanks.\n";
    }
    else
    {
        cout << "Lines are not identical after ignoring multiple blanks.\n";
    }
}
