#include<iostream>
#include<climits>
using namespace std;
class StackUsingArray{
private:
        int*data;
        int nextIndex;
        int capacity=4;
public:
    StackUsingArray()
    {
        data=new int[capacity];
        nextIndex=0;
    }
    void push(int element)
    {
        if(nextIndex==capacity)
        {
           int*newData=new int[capacity*2];
            for(int i=0;i<capacity;i++)
            {
                newData[i]=data[i];
            }
            capacity=capacity*2;
            delete []data;
            data=newData;

        }
        data[nextIndex]=element;
        nextIndex++;
    }
    int top()
    {
        if(isEmpty())
        {
             cout<<"Stack is empty. "<<endl;
             return INT_MIN;
        }
        return data[nextIndex-1];
    }
    int pop()
    {
        if(isEmpty())
        {
             cout<<"Stack is empty. "<<endl;
             return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }


    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex==0;
    }


};
int main()
{
    StackUsingArray s;
    s.push(10);
    s.push(20);
    cout<<s.top()<<endl;
    s.push(30);
    s.push(40);
     cout<<s.pop()<<endl;
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    if(s.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    if(s.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    s.push(35);
    s.push(45);
    s.push(55);
    s.push(05);
    s.push(59);
    cout<<s.top()<<endl;





}
