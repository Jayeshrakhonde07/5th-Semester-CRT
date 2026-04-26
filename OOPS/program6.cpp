// write  a class distance with attribute as meter and cm initialize two distances and overloaded + operator for addition of two distances

#include <iostream>
using namespace std;

class Distance
{
    int meter, cm;

public:
    // Constructor to initialize values
    Distance(int m = 0, int c = 0)
    {
        meter = m;
        cm = c;
    }

    // Overloading + operator
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.cm = cm + d.cm;
        temp.meter = meter + d.meter + (temp.cm / 100);
        temp.cm = temp.cm % 100;
        return temp;
    }

    // Function to display distance
    void display()
    {
        cout << "Distance = " << meter << " meter " << cm << " cm" << endl;
    }
};

int main()
{
    Distance d1(3, 75);
    Distance d2(2, 50);

    Distance d3 = d1 + d2;

    cout << "First ";
    d1.display();

    cout << "Second ";
    d2.display();

    cout << "After Addition ";
    d3.display();

    return 0;
}
