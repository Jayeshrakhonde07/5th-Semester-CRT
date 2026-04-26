// Accentature

#include <iostream>
using namespace std;

int calculate(int r, int unit, int arr[], int n)
{
    if (n == 0)
        return -1;

    int totalFoodRequired = r * unit;
    int foodTillNow = 0;
    int house = 0;

    for (house = 0; house < n; ++house)
    {
        foodTillNow += arr[house];
        if (foodTillNow >= totalFoodRequired)
        {
            break;
        }
    }
    if (totalFoodRequired > foodTillNow)
        return 0;
    return house + 1;
}

int main()
{
    int r;
    cout << "\nEnter total number of rats : ";

    cin >> r;

    int unit;
    cout << "\nEnter total units of each rats : ";
    cin >> unit;
    int n;
    cin >> n;
    int arr[n];

    cout << "\nEnter amount of units in each house : ";

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << calculate(r, unit, arr, n);

    return 0;
}
