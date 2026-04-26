#include<iostream>
using namespace std;

int main()
{
    int r,c,a,sum = 0 , m = 0, in = 0;
    cout<<"\nEnter totals rows and cols : ";
    cin>>r>>c;

    cout<<"\nEnter elements : ";

    for(int i = 0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum>m)
        {
            m = sum;
            in = i+1;
        }
        sum = 0;
    }
    cout<< in;
}