#include<iostream>
#include<queue>
#include<stack>
 using namespace std;


 void reversesQueue (queue<int> &q)
{
    stack<int> s;

    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reversesQueue(q);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
    }
   return 0;
}