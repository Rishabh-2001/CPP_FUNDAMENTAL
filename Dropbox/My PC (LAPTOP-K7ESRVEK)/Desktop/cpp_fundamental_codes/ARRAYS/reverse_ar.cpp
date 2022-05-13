#include<bits/stdc++.h>
using namespace std;

void reverse_rec(int a[],int s,int n)
{
    if(s>=n)
    {
        return;
    }
    int t=a[s];
    a[s]=a[n-1];
    a[n-1]=t;
    reverse_rec(a,s+1,n-1);
}
int main()
{

int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
reverse_rec(a,0,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<",";
}
cout<<endl;
delete[]a;
return 0;
}
