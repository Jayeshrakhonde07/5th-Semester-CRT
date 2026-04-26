// write a class drawing with  3-draw functions signature and output of that functions are as followed 
// 1. void draw()
// *
// **
// ***
// ****
// *****

// 2. void draw(int row)
// *
// **
// ***
// 3. void draw(int row, char ch)
// #
// ##
// ###
// ####


#include<iostream>
using namespace std;

class Drawing
{
    public:
    void draw();
    void draw(int);
    void draw(int,char);
};

void Drawing::draw()
{
 for (int i = 0; i < 5; i++)
 {
    for (int j = 0; j<=i; j++)
    {
       cout<<"*\t";
    }
    cout<<"\n";
    
 }
 
}
void Drawing::draw(int row)
{
    for (int i = 0; i < row; i++)
{
    for (int j = 0; j<=i; j++)
    {
       cout<<"*\t";
    }
    cout<<"\n";
    
 }
}
void Drawing::draw(int row, char ch)
{
     for (int i = 0; i < row; i++)
 {
    for (int j = 0; j<=i; j++)
    {
       cout<<ch<<"\t";
    }
    cout<<"\n";
    
 }
}

int main()
{
    Drawing obj;
    obj.draw();
    obj.draw(3);
    obj.draw(3,'#');
    return 0;
}