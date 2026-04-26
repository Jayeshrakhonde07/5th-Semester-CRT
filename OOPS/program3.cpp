//write a class phone with attribute as phone number,when connection is given to the customer create a new phone object initialize  its phone number then display individual phone number and display total phone connection to given to the customer


#include<iostream>
using namespace std;

class phone
{
    int phone_num;
    static int count;
    public:
    phone(int no)
    {
        phone_num = no;
        count++; 
    }
    void display()
    {
        cout<<"Phone No = "<<phone_num<<"\t count = "<<count<<endl;
    }

    static void print()
    {
        cout<<"Total count = "<<count<<endl;
    }
};

int phone:: count=0;
int main()
{
    phone p1(23456),p2(34567),p3(45678);
    p1.display();
    p2.display();
    p3.display();
    phone p4(67890);
    p4.display();
    p1.display();
    phone::print();

}