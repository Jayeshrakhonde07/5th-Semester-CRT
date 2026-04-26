//Question - You have to enter the number of semister and each semister how many subjects and in each semister Maximum marks

#include<iostream>
using namespace std;

class Array
{
    public: 
        int *Arr;
        int iSize;

        Array(int A)
        {
            iSize = A;
            Arr = new int[iSize];
        }

        void Accept()
        {
          for(int i = 0 ; i < iSize ; i++)
          {
            cout<<"Enter the number no of subjects in "<<i+1<<" Semister\n";
            cin>>Arr[i];
          }

          for(int i = 0 ; i < iSize ; i++)
          {
            cout<<"\nMarks obtained in "<<i+1<<" Semester : \n";
            int iMax = 0 , marks = 0;

            while(Arr[i]--)
            {
                r: 
                cout<<"Enter Marks : \n";
                cin>>marks;

                if(!(marks <= 100 && marks >= 0))
                {
                    cout<<"You have enteres a invalid marks : \n";
                    goto r;
                }
                iMax = max(iMax , marks);
            }

            cout<<"Maximum marks of this semester is : "<<iMax<<"\n";
          }
        }

        ~Array()
        {
            delete[]Arr;     
        }
};
int main()
{
    int iLength = 0, iRet = 0 ;         

    cout<<"Enter the number of semesters : \n";
    cin>>iLength;

    Array aobj(iLength);   

    aobj.Accept();

    return 0;
}