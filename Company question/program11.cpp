#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter numbers of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements : ";

    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int count = 1;

    int maxzSoFar = arr[0];

    for(int i = 1 ; i<n ; i++)
    {
        if(arr[i]>maxzSoFar)
        {
            count++;
            maxzSoFar = arr[i];
        }
    }
    cout <<" Output : " <<count <<endl;
    return 0;
}