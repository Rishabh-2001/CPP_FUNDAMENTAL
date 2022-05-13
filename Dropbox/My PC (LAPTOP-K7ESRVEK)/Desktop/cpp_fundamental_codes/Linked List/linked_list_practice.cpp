#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node*next;
   Node(int data)
   {
      this->data=data;
      next=NULL;
   }
};

Node*takeInput()
{
	int data;
	cin>>data;
	Node*head=NULL;
	Node*tail=NULL;
	while(data!=-1)
	{
	    Node*newnode=new Node(data);
	    if(head==NULL)
	    {
	        head=newnode;
	        tail=newnode;
	    }
	    else{
	     tail->next=newnode;
	     tail=tail->next;
	    }
	    cin>>data;
    }
    return head;
}
Node*insertAti(Node*head,int i,int data)
{
    Node*temp=head;
	Node*newnode=new Node(data);
	int cnt=0;
	if(i==0)
	{
	  newnode->next=head;
	  head=newnode;
	}
	else{
	  while(temp!=NULL&&cnt<i-1){
           temp=temp->next;
           cnt++;
	  }
	  if(temp==NULL)
 	  {
	    return head;
	  }
	  newnode->next=temp->next;
	  temp->next=newnode;
	  return head;

	}
}

Node*deleteAti(Node*head,int i)
{
	Node*temp=head;
	int cnt=0;
	if(i==0)
	{

	  head=head->next;
	  return head;
	}
	else{
	   while(temp!=NULL&&cnt<i-1)
	   {
	     temp=temp->next;
	     cnt++;
	   }
	   if(temp==NULL)
	   {
	      return head;
	   }
	   Node *a=temp->next;

	   temp->next=a->next;
	   delete a;
	   return head;
	}
}
Node*insertAtiRecursive(Node*head,int i,int data)
{
    Node*temp=head;
    if(temp==NULL)
    {
        return head;
    }
    if(i==0)
    {
        Node*newnode=new Node(data);
        newnode->next=head;
        head=newnode;
        return head;
    }
   Node*smallAns=insertAtiRecursive(temp->next,i-1,data);
   if(smallAns==NULL)
   {
       return head;
   }
    head->next=smallAns;
    return head;
}
Node*deleteAtiRecursive(Node*head,int i)
{
    Node*temp=head;
    if(temp==NULL)
    {
        return head;
    }
    if(i==0)
    {
        Node*a=head;

        head=a->next;
        delete a;
        return head;
    }
    Node*smallAns=deleteAtiRecursive(head->next,i-1);
    head->next=smallAns;
    return head;
}
int length(Node*head)
{
    Node*temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

int search_node(Node*head,int key)
{
    Node*temp=head;
    int ans=-1;
    int cnt=0;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            ans=cnt;
            break;
        }
        cnt++;
        temp=temp->next;
    }
    return ans;
}
Node*append_nodes(Node*head,int n)
{
    Node*temp=head;
    int cnt=0;
    int len=length(temp);
    if(n==len||n%len==0)
    {
        return head;
    }
    temp=head;
    while(temp!=NULL&&cnt<(len-n-1))
    {
        temp=temp->next;
        cnt++;

    }
    Node*a=temp->next;
    Node*b=temp->next;
    temp->next=NULL;
    while(b->next!=NULL)
    {
        b=b->next;
    }
    b->next=head;
    head=b;
    return a;

}
void print(Node*head)
{

    Node*temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void print_reverse(Node*head)
{
  if(head==NULL)
  {
      return;
  }
    print_reverse(head->next);
    cout<<head->data<<",";
}
Node*remove_duplicates(Node*head)
{

    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node*t1=head;
    Node*t2=head->next;
    while(t2!=NULL)
    {
        if(t1->data!=t2->data)
        {
            t1->next=t2;
            t2=t2->next;
            t1=t1->next;
        }
        else{
                t2=t2->next;
        }
    }
    t1->next=NULL;
    return head;
}
Node*helper(Node*curr,Node*pre,Node*nex)
{
    if(nex==NULL)
    {
        curr->next=pre;
        return curr;
    }
    curr->next=pre;
    pre=curr;
    curr=nex;
    helper(curr,pre,nex->next);
}

Node*rev(Node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node*curr=head;
    Node*pre=NULL;
    Node*nex=curr->next;

    Node*ansHead=helper(curr,pre,nex);
    return ansHead;
}
Node*reverse_list(Node*head)
{

//    if(head==NULL)
//    {
//        return head;
//    }
//    Node*pre=NULL;
//    Node*curr=head;
//    while(curr->next!=NULL)
//    {
//        Node*nex=curr->next;
//        curr->next=pre;
//        pre=curr;
//        curr=nex;
//    }
//    if(curr->next==NULL)
//    {
//        curr->next=pre;
//
//    }
//    return curr;
        Node*pre=NULL;
        Node*curr=head;

        while(curr!=NULL&&curr->next!=NULL)
        {
            Node*nex=curr->next;
           curr->next=pre;
            pre=curr;
            curr=nex;
        }
            curr->next=pre;
        return pre;
}

bool palinNode(Node*head)
{

    Node*temp=head;
    int len=length(head);
    if(len%2==0)
    {
        int mid=len/2;
        int cnt=0;
        while(temp!=NULL&&cnt<mid-1)
        {
            temp=temp->next;
            cnt++;
        }
        Node*a=temp->next;
        temp->next=NULL;

        a=reverse_list(a);

        while(a!=NULL&&head!=NULL)
        {
            if(a->data!=head->data)
            {
                return false;
            }
            a=a->next;
            head=head->next;
        }
        return true;

    }
    else{

         int mid=len/2;
        int cnt=0;
        while(temp!=NULL&&cnt<mid)
        {
            temp=temp->next;
            cnt++;
        }
        Node*a=temp->next;
        temp->next=NULL;

           a=reverse_list(a);

        while(a!=NULL&&head!=NULL)
        {
            if(a->data!=head->data)
            {
                return false;
            }
            a=a->next;
            head=head->next;
        }
    }
    return true;

}
int midpoint(Node*head)
{
    Node*temp=head;
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
Node*merge_two_lists(Node*head,Node*head2)
{
    Node*temp1=head;
    Node*temp2=head2;
    Node*fh=NULL;
    Node*ft=NULL;

    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->data<=temp2->data)
        {

            if(fh==NULL)
            {
                fh=temp1;
                ft=temp1;
            }
            else{
                ft->next=temp1;
                ft=ft->next;

            }
            temp1=temp1->next;

        }

        else if(temp1->data>temp2->data)
        {
            if(fh==NULL)
            {
                fh=temp2;
                ft=temp2;
            }
            else{
                ft->next=temp2;
                ft=ft->next;
            }
            temp2=temp2->next;
        }


    }
    if(temp1==NULL&&temp2!=NULL)
    {
        ft->next=temp2;
    }
    else if(temp1!=NULL&&temp2==NULL)
    {
        ft->next=temp1;
    }
    return fh;
}
Node* merge_sort(Node*head)
{
    if(head->next==NULL)
    {
        return head;
    }

    Node*temp=head;
    Node*slow=head;
    Node*fast=head->next;
    Node*e=NULL;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;

        if(fast->next->next==NULL)
        {
            fast=fast->next;
            e=fast;
            break;
        }
        fast=fast->next->next;
    }
    Node*h1=temp;
    Node*t1=slow;
    Node*h2=slow->next;
    Node*t2=e;
    t1->next=NULL;
    h1=merge_sort(h1);
    h2=merge_sort(h2);
    h1=merge_two_lists(h1,h2);
    return h1;
}

Node*odd_even(Node*head)
{
    if(head==NULL)
    {
        return head;
    }
    Node*oh=NULL;
    Node*ot=NULL;
    Node*eh=NULL;
    Node*et=NULL;
    Node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            if(eh==NULL)
            {
                eh=temp;
                et=temp;
            }
            else{
                et->next=temp;
                et=et->next;
            }

        }
        else{
            if(oh==NULL)
            {
                oh=temp;
                ot=temp;
            }
            else{
                ot->next=temp;
                ot=ot->next;
            }

        }
         temp=temp->next;
    }

    if(oh==NULL)
    {
        et->next=NULL;
        return eh;
    }
    else
    {
    ot->next=eh;
    et->next=NULL;
    }
    return oh;

}
Node* delete_m_after_n(Node*head,int m,int n)
{
    Node*temp=head;
    Node* newTemp=NULL;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt=0;
        while(cnt<n-1&&temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        if(temp==NULL)
        {
            return head;
        }

        newTemp=temp->next;
        cnt=0;
        while(cnt<m&&newTemp!=NULL)
        {
            Node*a=newTemp;
            newTemp=newTemp->next;
            cnt++;
            delete a;
        }
        if(newTemp==NULL)
        {
            temp->next=NULL;
            return head;
        }
        temp->next=newTemp;
        temp=temp->next;
    }
    return head;

}
Node*swap_nodes(Node*head,int m,int n)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node*temp=head;
    Node*temp2=head;
    Node*p1=NULL;
    Node*p2=NULL;
    Node*n1=NULL;
    Node*n2=NULL;
    int c=0;
    int j=max(m,n);

    int i=min(m,n);




    if(i==0)
    {
        n1=temp->next;
        c=0;
        if(j==1)
        {
            p2=temp2;
            temp2=temp2->next;
            n2=temp2->next;
            temp2->next=n1;
            n1->next=p2;
            p2->next=n2;
            head=temp2;
            return head;
        }
        while(c<j&&temp2!=NULL)
            {
                p2=temp2;
                n2=temp2->next;
                temp2=temp2->next;
                c++;
            }

        if(temp2==NULL||temp2->next==NULL)
        {
            n2=NULL;
            temp->next=n2;
            p2->next=temp;
            temp2->next=n1;
            head=temp2;
            return head;
        }
        n2=temp2->next;
        temp->next=n2;
        p2->next=temp;
        temp2->next=n1;
        head=temp2;
        return head;
    }

    while(c<i&&temp!=NULL)
    {
        p1=temp;
        n1=temp->next;
        temp=temp->next;
        c++;
    }
    if(temp==NULL)
    {
        return head;
    }
    if(j-i==1)
    {
        temp2=temp->next;
        n2=temp->next->next;
        p1->next=temp2;
        temp2->next=temp;
        temp->next=n2;
        return head;
    }
    n1=temp->next;
    if(n1==NULL)
    {
        return head;
    }

    c=0;
    while(c<j&&temp2!=NULL)
    {
        p2=temp2;
        n2=temp2->next;
        temp2=temp2->next;
          c++;
    }
    if(temp2==NULL||temp2->next==NULL)
    {
        n2=NULL;
        temp->next=n2;
        p2->next=temp;
        p1->next=temp2;
        temp2->next=n1;
        return head;
    }
    n2=temp2->next;
    temp->next=n2;
    p2->next=temp;
    p1->next=temp2;
    temp2->next=n1;
    return head;

}
Node*krev(Node*head,int k)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node*h1=head;
   Node*temp=head;
   Node*tail=head;
   int cnt=0;
   Node*pre=NULL;
   while(cnt<k-1&&temp->next!=NULL)
   {
       pre=temp;
       temp=temp->next;
       cnt++;
   }
   tail=temp;
   Node*nextHead=temp->next;
   tail->next=NULL;
//   h1=reverse_list(h1,tail);
   Node*ch=h1;
   while(ch->next!=NULL)
   {
       ch=ch->next;
   }
   tail=ch;
   Node*sh=krev(nextHead,k);
   tail->next=sh;
   return h1;
}

Node*bubble_sort(Node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
   Node*temp=head;
    int len=length(temp);
    while(len--)
    {
         Node*curr=head;
         Node*pre=NULL;
         while(curr->next!=NULL)
         {
             if(curr->data<curr->next->data)
             {
                 pre=curr;
                 curr=curr->next;
             }
             else{
                    if(pre==NULL)
                    {
                        Node*nex=curr->next;
                        curr->next=nex->next;
                        nex->next=curr;
                        pre=nex;
                        head=pre;
                    }
                    else{
                    Node*nex=curr->next;
                    pre->next=curr->next;
                    curr->next=nex->next;
                    nex->next=curr;
                    pre=nex;
                    }
             }
         }

    }
    return head;

}
Node*increment_helper(Node*head)
{
    if(head==NULL)
    {
        return head;
    }

    Node*temp=head;

    int carry=1;
    Node*pre=NULL;
    int sum=0;
    while(temp!=NULL)
    {
        pre=temp;
         sum=carry+temp->data;
        carry=sum/10;
        sum=sum%10;
        temp->data=sum;
        temp=temp->next;
    }
    if(carry>0)
    {
        Node*newnode=new Node(carry);
        pre->next=newnode;
    }

    return head;
}
Node*increment(Node* head){
//  head=reverse_list(head);
  head=increment_helper(head);
 // return reverse_list(head);

}
Node*delete_alternate(Node*head)
{
    Node*temp=head;
    Node*pre=NULL;

    while(temp!=NULL&&temp->next!=NULL)
    {
        Node*nex=temp->next;
        temp->next=nex->next;
        delete nex;
        temp=temp->next;

    }
    return head;
}
bool cycle_detection(Node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL)
    {
          fast=fast->next->next;
        if(slow==fast)
        {
            cout<<"cycle exist ."<<endl;
            return true;
            break;
        }
    }
    if(fast==NULL)
    {
        cout<<"cycle doesnt exist. "<<endl;
        return false;
    }
}
Node*swap_alt(Node*head)
{
    if(head==NULL||head->next==NULL)
        {
            return head;
        }
        Node*curr=head;
        Node* pre=NULL;
    while(curr->next!=NULL)
        {
            Node*nex=curr->next;
            if(pre==NULL)
            {
                curr->next=nex->next;
                nex->next=curr;
                pre=curr;
                head=nex;
                curr=curr->next;
            }
            else{
                curr->next=nex->next;
                nex->next=curr;
                pre->next=nex;
                pre=curr;
                curr=curr->next;
            }
        }

        return head;
}
int main()
{
    Node*head=takeInput();
    cout<<"Your linked list is:"<<endl;
    print(head);
    cout<<"After reversal:"<<endl;
    head=reverse_list(head);
    print(head);
  //  int i,data;
   // cout<<"Enter the position and data where you want to insert data:"<<endl;
   // cin>>i>>data;
  //  head=deleteAtiRecursive(head,i);
  // head=deleteAti(head,i);
    //cout<<"Updataed list is:"<<endl;
   // print(head);
 /*  int key;
   cout<<"Enter key:"<<endl;
   cin>>key;
   int ans=search_node(head,key);
   cout<<key<<" found at index "<<ans<<endl;
   */
   //int n;
  // cout<<"Enter n:"<<endl;
   //cin>>n;
   //head=append_nodes(head,n);
  // cout<<"Updat3ed list is:"<<endl;
 //  print(head);
//    if(palinNode(head))
//     {
//         cout<<"Palindromic list"<<endl;
//     }
//     else{
//        cout<<"Not Palindromic list"<<endl;
//     }

     //head=reverse_list(head);
     //cout<<"Reversed is:"<<endl;
    // print(head);
   //  print(head);
    // int ans=midpoint(head);
    // cout<<"Midpoint is "<<ans<<endl;

      /*

     head=reverse_list(head);
     cout<<"Reversed list is:"<<endl;
     print(head);
       */
     /*  cout<<"Enter second list:"<<endl;
       Node*head2=takeInput();
       print(head);
       print(head2);
       head=merge_two_lists(head,head2);
       print(head);
       */
      // head=rev(head);
    //  head=remove_duplicates(head);
    //print_reverse(head);
   //    print(head);
  // head=odd_even(head);
 // int m,n;
  //cout<<"Enter m and n:"<<endl;
  //cin>>m>>n;
 // head=delete_m_after_n(head,m,n);
 //head=swap_nodes(head,m,n);
   //print(head);
  // int k;
   //cout<<"Enter k: "<<endl;
   //cin>>k;
   //head=krev(head,k);
  // head=bubble_sort(head);
   //print(head);
  // head=increment(head);
 // head=delete_alternate(head);
 //head=swap_alt(head);
   //print(head);
   return 0;

}
