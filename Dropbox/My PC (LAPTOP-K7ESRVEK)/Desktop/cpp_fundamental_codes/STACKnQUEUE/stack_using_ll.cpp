#include<iostream>
using namespace std;
template<typename T>

class Node{
public:
    T data;
    Node<T>*next;
    Node(T data)
    {
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class stack_using_LL{
  private:
      Node<T>*head;
      int size;
  public:
      stack_using_LL()
      {
          head=NULL;
          size=0;
      }
      int getSize()
      {
          return size;
      }
      bool isEmpty()
      {
          if(head==NULL)
          {
              return true;
          }
          else{
            return false;
          }
      }
      void push(T element)
      {
          Node<T>*newnode=new Node<T>(element);
          newnode->next=head;
          head=newnode;
          size++;
      }
      T pop()
      {
          if(head==NULL)
          {
              cout<<"Stack is empty" <<endl;
          }
          else{
          Node<T>*temp=head;
          T ans=temp->data;
          head=head->next;
          size--;
          delete temp;
          return ans;
          }
      }
      void top()
      {
          if(head==NULL)
          {
              cout<<"Stack is empty" <<endl;
          }
          else{
            cout<<head->data<<endl;
          }
      }
};

int main()
{
    stack_using_LL<int> s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);
    s.push(66);
    cout<<s.getSize()<<endl;
    s.pop();
    s.pop();
    cout<<s.getSize()<<endl;
    s.top();
    s.top();
    s.isEmpty();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
     s.pop();
    return 0;



}

