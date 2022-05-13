#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int*a=new int[n];
int sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+n);
int p=0;
int s=0;
for(int i=n-1;i>=0;i--)
{
    s=s+a[i];
    p++;
    if(s>sum-s)
    {
       break;
    }
}
cout<<p<<endl;


delete[]a;
return 0;
}
