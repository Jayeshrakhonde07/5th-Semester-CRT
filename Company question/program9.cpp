#include <iostream>
using namespace std;

int NumberofCarries(int num1, int num2)
{
    int carry = 0, p, q, sum;
    int count = 0;
    while (num1 > 0 || num2 > 0)
    {
        p = num1 % 10;
        q = num2 % 10;

        sum = carry + p + q;

        if (sum > 9)
        {
            carry = 1;
            count++;
        }
        else
        {
            carry = 0;
        }
        num1 = num1 / 10;
    }
    while (num2 != 0)
    {
        p = num1 % 10;
        sum = carry + p;
        if (sum > 9)
        {
            carry = 1;
            count++;
        }
        else
        {
            carry = 0;
        }
        num1 = num1 / 10;
    }
    while (num2 != 0)
    {
        carry = 0;
    }
    num1 = num1 / 10;
    num2 = num2 / 10;
    return count;
}

int main()
{
    int x, y, a;
    cout << "\nEnter two numbers: ";
    cin >> x >> y;
    a = NumberofCarries(x, y);
    cout << a;
    return 0;
}