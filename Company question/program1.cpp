// Finds factors of number CAPGEMINI-1

#include<iostream>
using namespace std;

class Factors
{
    public:
    void findfactor(int);
};
void Factors::findfactor(int n)
{
if(n==0)
cout<<"\n No Factors";
else
{
    if(n>0)
    n=abs(n);
    for(int a = 1; a<=n;a++)
    {
        if(n%a==0)
        cout<<"\t"<<a;
    }
}
}
int main()
{
    Factors obj;
    obj.findfactor(25);
    return 0;
}