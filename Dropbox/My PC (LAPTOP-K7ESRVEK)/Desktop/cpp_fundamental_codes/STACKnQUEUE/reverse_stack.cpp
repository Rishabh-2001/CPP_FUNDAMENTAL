#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<",";
        s.pop();
    }
    return;
}
stack<int> reverse_stack(stack<int>s)
{
    if(s.empty())
    {
        return s;
    }
    stack<int>s2;
    int t=s.top();
    s.pop();
    s=reverse_stack(s);
    while(!s.empty())
    {
        int a=s.top();
        s.pop();
        s2.push(a);
    }
    s.push(t);
    while(!s2.empty())
    {
        int a=s2.top();
        s2.pop();
        s.push(a);
    }
    return s;
}
int main()
{
    stack<int>s;
    s.push(10);
     s.push(20);
      s.push(30);
       s.push(40);
        s.push(50);
         s.push(60);
         cout<<"Before reverse:"<<endl;
         print(s);

         stack<int>s2;
      s=reverse_stack(s);
       cout<<"After reverse:"<<endl;

         print(s);
       return 0;



}
