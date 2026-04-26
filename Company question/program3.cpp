#include <iostream>
#include <string>
using namespace std;

string moveHash(string str, int n)
{
    string result = "";
    int hashCount = 0;

    // Count number of '#'
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '#')
            hashCount++;
    }

    // Add all '#' at front
    for (int i = 0; i < hashCount; i++)
    {
        result += '#';
    }

    // Add remaining characters
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '#')
            result += str[i];
    }

    return result;
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    string output = moveHash(str, str.length());
    cout << "Output: " << output;

    return 0;
}