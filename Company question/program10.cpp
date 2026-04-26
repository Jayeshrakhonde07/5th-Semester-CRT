// 

#include<iostream>
using namespace std;

int main()
{
    int v,w;
    int twow, fourw;

    cout<<"Enter total number of vehicles : ";
    cin>>v;
    cout<<"Enter total number of wheels : ";
    cin>>w;

    // Calculate four wheelers
    fourw = (w-2*v)/2;

    // Calculate two wheelers
    twow = v-fourw;

    if(fourw<0 || twow <0 || (2 * twow + 4 * fourw != w))
    {
        cout<<"Invalid input data!"<<endl;
    }
    else
    {
        cout<<"Two Wheelers = "<<twow<<endl;
        cout<<"Four Wheelers = "<<fourw<<endl;
    }
    return 0;
}