#include<bits/stdc++.h>
#include "treenode.h"
using namespace std;
treenode<int>*takeinput()
{
    int rootdata;
    cout<<"Enter Root data:"<<endl;
    cin>>rootdata;
    treenode<int>*root=new treenode<int>(rootdata);

    int n;
    cout<<"Enter number of children of "<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        treenode<int>*child=takeinput();
        root->children.push_back(child);
    }
    return root;
}
treenode<int>*takeinput_levelwise()
{
     int rootdata;
    cout<<"Enter Root data:"<<endl;
    cin>>rootdata;
    treenode<int>*root=new treenode<int>(rootdata);
    queue<treenode<int>*>pendingQ;
    pendingQ.push(root);
    while(!pendingQ.empty())
    {
        treenode<int>*front=pendingQ.front();
        pendingQ.pop();
        int num;
        cout<<"Enter number of children of "<<front->data<<":"<<endl;
        cin>>num;
        for(int i=0;i<num;i++)
        {
            cout<<"Enter the "<<i<<"th child of "<<front->data<<":";
            int childdata;
            cin>>childdata;
            treenode<int>*child=new treenode<int>(childdata);
            front->children.push_back(child);
            pendingQ.push(child);
        }

    }
    return root;
}
void print_levelwise(treenode<int>*root)
{
    if(root==NULL)
    {
        cout<<"empty tree"<<endl;
        return;
    }
    queue<treenode<int>*>pendingQ;
    pendingQ.push(root);
    while(!pendingQ.empty())
    {
        treenode<int>*front=pendingQ.front();
        pendingQ.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data<<",";
            pendingQ.push(front->children[i]);
        }
        cout<<endl;
    }
}
void print(treenode<int>*root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }

}
int count_nodes(treenode<int>*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++)
    {
        ans=ans+count_nodes(root->children[i]);
    }
    return ans;
}
int sum_nodes(treenode<int>*root)
{
    int sum=root->data;

    for(int i=0;i<root->children.size();i++)
    {
        sum=sum+sum_nodes(root->children[i]);
    }
    return sum;
}
int max_val(treenode<int>*root)
{
    if(root==NULL)
    {
        return -1;
    }
    int mx=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        int nmax=max_val(root->children[i]);
        mx=max(mx,nmax);
    }
    return mx;
}
int height(treenode<int>*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ht=0;
    for(int i=0;i<root->children.size();i++)
    {
        int recht=height(root->children[i]);
         ht=max(ht,recht);
    }
    return ht+1;
}

void print_level_d(treenode<int>*root,int d)
{
    if(root==NULL)
    {
        return ;
    }
    if(d==0)
    {
        cout<<root->data<<",";
        return ;
    }
    for(int i=0;i<root->children.size();i++)
    {
        print_level_d(root->children[i],d-1);
    }

}
int count_leaf(treenode<int>*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans=0;
    if(root->children.size()==0)
    {
        return 1+ans;
    }
    for(int i=0;i<root->children.size();i++)
    {
         ans=ans+count_leaf(root->children[i]);
    }
    return ans;
}
void preorder(treenode<int>*root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<",";

    for(int i=0;i<root->children.size();i++)
    {
        preorder(root->children[i]);
    }

}
void postorder(treenode<int>*root)
{
    if(root==NULL)
    {
        return ;
    }
    for(int i=0;i<root->children.size();i++)
    {
        postorder(root->children[i]);
    }
    cout<<root->data<<",";
}
bool isPresent(treenode<int>*root,int x)
{
    bool ans=false;
    if(root->data==x)
    {
        ans=true;
        return ans;
    }
    for(int i=0;i<root->children.size();i++)
    {
       bool sa=isPresent(root->children[i],x);
       ans=sa||ans;
    }
    return ans;


}
bool search(treenode<int>*root,int x)
{
    queue<treenode<int>*>searchQ;
    searchQ.push(root);
    while(!searchQ.empty())
    {
        treenode<int>*front=searchQ.front();
        searchQ.pop();
        if(front->data==x)
        {
            return true;
        }
        for(int i=0;i<front->children.size();i++)
        {
            searchQ.push(front->children[i]);
        }
    }
    return false;
}
int count_x(treenode<int>*root,int x)
{
    int cnt=0;
    if(root->data>x)
    {
       cnt++;
    }
    for(int i=0;i<root->children.size();i++)
    {
        int sa=count_x(root->children[i],x);
        cnt=cnt+sa;
    }
    return cnt;
}
pair<int,int> max_sum_child(treenode<int>*root)
{
    int sum=root->data;
    int root_ans=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        sum+=root->children[i]->data;
    }
    for(int i=0;i<root->children.size();i++)
    {
        pair<int,int>rec_ans=max_sum_child(root->children[i]);
        if(rec_ans.second>sum)
        {
            sum=rec_ans.second;
            root_ans=rec_ans.first;
        }
    }
    pair<int,int>p;
    p.first=root_ans;
    p.second=sum;
    return p;
}
bool isIdentical(treenode<int>*root,treenode<int>*root2)
{

    if(root->data!=root2->data)
    {
        return false;
    }
    for(int i=0;i<root->children.size();i++)
    {
        bool sa=isIdentical(root->children[i],root2->children[i]);
        if(sa)
        {
            return true;
        }
        else{
            return false;
        }
    }
    return true;

}
int next_greater(treenode<int>*root,int x)
{
    int ans=INT_MAX;
    if(root->data>x&&root->data<ans)
    {
        ans=root->data;
    }
    for(int i=0;i<root->children.size();i++)
    {
        int rec_ans=next_greater(root->children[i],x);
        if(rec_ans>x&&rec_ans<ans)
        {
            ans=rec_ans;
        }
    }
    return ans;
}
pair<int,int> second_max(treenode<int>*root)
{

    int fmax=root->data;
    int smax=INT_MIN;
    for(int i=0;i<root->children.size();i++)
    {
        pair<int,int>rec_ans=second_max(root->children[i]);
        if(rec_ans.first>fmax)
        {
            int temp=fmax;
            fmax=rec_ans.first;
            smax=max(smax,max(rec_ans.second,temp));
        }
        else{
            smax=max(smax,rec_ans.first);
        }

    }
    pair<int,int>p;
    p.first=fmax;
    p.second=smax;
    return p;
}
void replace_depth(treenode<int>*root,int d)
{

   root->data=d;
    for(int i=0;i<root->children.size();i++)
    {
      replace_depth(root->children[i],d+1);
    }

}
treenode<int>*remove_leaf(treenode<int>*root)
{
    if(root==NULL)
    {
        return root;
    }
     for(int i=root->children.size()-1;i>=0;i--)
    {
        treenode<int>*key=root->children[i];
        if(key->children.size()==0)
        {
            root->children.erase(root->children.begin()+i);
        }
    }
    for(int i=0;i<root->children.size();i++)
    {
        remove_leaf(root->children[i]);
    }
    return root;
}
treenode<int>*mirror(treenode<int>*root)
{
    for(int i=0;i<root->children.size();i++)
    {
        treenode<int>*nroot=mirror(root->children[i]);
    }
   int l=0;
   int r=root->children.size()-1;
   while(l<r)
   {
       treenode<int>*t=root->children[l];
       root->children[l]=root->children[r];
       root->children[r]=t;
       l++;
       r--;
   }
   return root;
}
void linear(treenode<int>*root)
{
    for(int i=0;i<root->children.size();i++)
    {
        linear(root->children[i]);
    }
    while(root->children.size()>1)
    {
        treenode<int>*last=root->children[root->children.size()-1];
        root->children.erase(root->children.begin()+root->children.size()-1);
        treenode<int>*slast=root->children[root->children.size()-2];
//        treenode<int>*stl=slast->children.pop_back();
//        stl->children.push_back(last);

    }
}
int state=0;
int pred,succ;
void predecessor(treenode<int>*root,int key)
{
    if(state==0)
    {
        if(root->data==key)
        {
            state=1;
        }
        else{
            pred=root->data;

        }
    }
    else if(state==1)
    {
        succ=root->data;
        state=2;
    }
    for(int i=0;i<root->children.size();i++)
    {
        predecessor(root->children[i],key);
    }

}
void helper_kth(treenode<int>*root,int k,priority_queue<int>&pq)
{
    if(root==NULL)
    {
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        helper_kth(root->children[i],k,pq);
    }
    pq.push(root->data);
}
// 10 3 20 30 40 2 50 60 3 70 80 90 2 100 110 1 120 0 0 2 130 140 0 1 150 0 0 0 0 0
int kthmax(treenode<int>*root,int k)
{
    priority_queue<int>pq;
     helper_kth(root,k,pq);
     while(k>1&&!pq.empty())
     {
         int t=pq.top();
         pq.pop();
         k--;
     }
     int ans=pq.top();
     pq.pop();
     return ans;
}
int dia=0;
int diameter(treenode<int>*root)
{
    if(root==NULL)
    {
        return -1;
    }
    int fmax=0;
    int smax=0;
     int  ans=fmax;
    for(auto i:root->children)
    {
        int rec_ans=diameter(i);
        if(rec_ans>fmax){
         fmax=max(rec_ans,ans);
         smax=fmax;
        }
        else{
            smax=max(smax,rec_ans);
        }
    }
    dia=max(dia,fmax+smax+2);
    return ans+1;
}


// 1 3 2 3 4 2 5 6 0 1 8 0 0 1 9 0
//1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
// 10 3 40 8 30 2 20 25 1 26 0 0 0 0
int main()
{
    /*
 treenode<int>*root=new treenode<int>(1);
  treenode<int>*node1=new treenode<int>(2);
   treenode<int>*node2=new treenode<int>(3);
   root->children.push_back(node1);
   root->children.push_back(node2);
   */
   treenode<int>*root=takeinput_levelwise();
   print_levelwise(root);
  /* int ans=count_nodes(root);
   cout<<ans<<endl;
   int sum=sum_nodes(root);
   cout<<"sum is :"<<sum<<endl;
   int mx=max_val(root);
   cout<<"Max value in the tree i s:"<<mx<<endl;
   int ht=height(root);
   cout<<"Height of tree is:"<<ht<<endl;
   cout<<"Enter the vlaue of level:"<<endl;
   int d;
   cin>>d;
   cout<<"Nodes at he level/depth "<<d<<" are:"<<endl;
   print_level_d(root,d);
   */
  // int ans=count_leaf(root);
   //cout<<"Count of leaf nodes is:"<<ans<<endl;
//     cout<<"Preorder travereal of treee is:"<<endl;
//     preorder(root);
//      cout<<"postorder travereal of treee is:"<<endl;
//      postorder(root);
//      int x;
//      cout<<"Enter x:"<<endl;
//      cin>>x;
////      if(isPresent(root,x)){
////        cout<<"Present"<<endl;
////      }
////      else{
////        cout<<"Not present"<<endl;
////      }
//        int xcount=count_x(root,x);
//        cout<<"Count of nodes greater than "<<x<<" are:"<<xcount<<endl;
//         pair<int,int> datasum=max_sum_child(root);
//         cout<<"Max sum child is "<<datasum.second<<" and of root "<<datasum.first<<endl;
//      treenode<int>*root2=takeinput_levelwise();
//      cout<<"Tree 2 is:";
//      print_levelwise(root2);
//      if(isIdentical(root,root2))
//      {
//          cout<<"yes identical"<<endl;
//      }
//      else{
//        cout<<"no not identical"<<endl;
//      }
//       cout<<"Next greater value to "<<x<<" is :";
//     int ans2= next_greater(root,x);
//    cout<<ans2<<endl;
//        pair<int,int>ans=second_max(root);
//        cout<<"Second max value oin tree is :"<<ans.second<<endl;
//        replace_depth(root,0);
//    cout<<"Tree after replacing with dpeth value is :"<<endl;
//    print_levelwise(root);
//  cout<<"Mirror of th etree is:"<<endl;
//  root=mirror(root);
//// cout<<"Removing leaf nodes:"<<endl;
 //root=remove_leaf(root);
 cout<<"Linear tree:"<<endl;
    //linear(root);       NOT COMPLETED
  //print_levelwise(root);
//  int key;
//  cout<<"Enter key:"<<endl;
//  cin>>key;
//    predecessor(root,key);
//    cout<<"Predecessor is:"<<pred<<endl;
//    cout<<"Successor is :"<<succ<<endl;
//   int val2=kthmax(root,key);
//   cout<<"Kth max value is :"<<val2<<endl;
     int d=diameter(root);
     cout<<"Diameter of tree is :"<<dia<<endl;

            return 0;

}
