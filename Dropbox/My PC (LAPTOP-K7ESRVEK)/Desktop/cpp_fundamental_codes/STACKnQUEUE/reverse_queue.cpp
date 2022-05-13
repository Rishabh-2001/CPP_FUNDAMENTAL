#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void print(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<",";
        q.pop();
    }
    return;
}
queue<int>reverse_queue2(queue<int>q)
{
    if(q.empty())
    {
        return q;
    }
    int t=q.front();
    q.pop();
    q=reverse_queue2(q);
    q.push(t);
    return q;
}
queue<int>reverse_queue(queue<int>q)
{

    stack<int>s;
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        s.push(t);
    }
    while(!s.empty())
    {
        int a=s.top();
        s.pop();
        q.push(a);
    }
    return q;
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<"Before reverse:"<<endl;
    print(q);
    q=reverse_queue2(q);
    cout<<"After reverse:"<<endl;
    print(q);



}
