//write a class employee with attributes of emp_id, basic salary, HRA, travelling Alloance, PF, and gross salary accept the empid and basic salary then calculate the gross salary and display all the employee data

#include<iostream>
using namespace std;

class Employee
{
    private:
    int employee_id;
    int BS;
    float HRA,TA,DA,PF,GS;
   
    public:
    void Input()
    {
        cout<<"Enter Employee id\n: ";
        cin>>employee_id; 
        cout<<"Enter basic salary\n: ";
        cin>>BS;
    }

    void calculate()
    {
        HRA = BS*0.8;
        TA = BS*0.7;
        DA = BS*0.9;
        PF = BS*0.4;
        GS = BS+HRA+TA+DA-PF;
    }

    void display()
    {
        cout<<"Employee ID = "<<employee_id<<endl;
        cout<<"HRA = "<<HRA<<"\nTA = "<<TA<<"\nDA = "<<DA;
        cout<<"\nPF = "<<PF<<"\nGross Salary = "<<GS<<endl;
    }
};

int main()
{
    Employee e1;
    e1.Input();e1.calculate();e1.display();
    return 0;
}
