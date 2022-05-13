#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void print(node*head)
{
    if(head==NULL)
    {
        return;
    }
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<",";
        temp=temp->next;
    }
}
node*takeinput()
{
    node*head=NULL;
    node*tail=NULL;
    int data;
    cin>>data;
    while(data!=-1)
    {
        node*newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
pair<node*,node*>do_something(stack<node*>s)
{
    node*fh=NULL;
    node*ft=NULL;
    pair<node*,node*>p;
    while(!s.empty())
    {
        node*a=s.top();
        s.pop();
        if(fh==NULL)
        {
            fh=a;
            ft=a;
        }
        else{
            ft->next=a;
            ft=ft->next;
        }
    }
    p.first=fh;
    p.second=ft;
    return p;
}
node*kreverse(node*head,int k)
{
    stack<node*>s;
    if(head==NULL)
    {
        return head;
    }
        node*temp=head;
        int cnt=0;
        while(cnt<k-1&&temp->next!=NULL)
        {
            s.push(temp);
            temp=temp->next;
            cnt++;
        }


        s.push(temp);
        node*nex=temp->next;
        pair<node*,node*>ans=do_something(s);
        node*newh=ans.first;
        node*newt=ans.second;
        node*h2=kreverse(nex,k);
        newt->next=h2;
        return newh;
}
int main()
{
    node*head=takeinput();
    cout<<"Your ink list is:"<<endl;
    print(head);
    int k;
    cout<<"Enter value of k:"<<endl;
    cin>>k;
    head=kreverse(head,k);
    print(head);
    return 0;
}
