#include<iostream>
using namespace std;

class employee
{
    float salary, ratings;
    public:
    void accept()
    {
        cout<<"\nEnter Salary :";
        cin>>salary;
        cout<<"\nEnter Ratings :";
        cin>>ratings;
    }
    void calculate()
    {
        if(ratings>=1&&ratings<=3)
        salary=salary+salary*0.1;
        else if(ratings>3 and ratings<=4)
        salary=salary+salary*0.25;
        else if(ratings>4)
        salary+=salary*0.3;
        cout<<"\nIncremented Salary = "<<salary;
    }
};

int main()
{
    employee e1;
    e1.accept();
    e1.calculate();

    return 0;
}