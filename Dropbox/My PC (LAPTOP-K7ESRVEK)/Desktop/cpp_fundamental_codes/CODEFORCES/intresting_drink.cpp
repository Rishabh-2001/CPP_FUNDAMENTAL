#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int n,int num)
{
   int l=0;
   int r=n-1;
   while(l<r)
   {
       int m=(l+r)/2;
       if(a[m]<=num)
       {
           l=m+1;
       }
       else{
            r=m;
       }
   }
   if(a[l]>num)
   {
       return l;
   }
   else{
    return -1;
   }
}

int main()
{
int n;
cin>>n;
int*a=new int[n];
int mn=INT_MAX;
int mx=INT_MIN;

for(int i=0;i<n;i++)
{
    cin>>a[i];
    mn=min(mn,a[i]);
    mx=max(mx,a[i]);
}

sort(a,a+n);
int d;
cin>>d;
while(d>0)
{
    int num;
    cin>>num;
    if(num<mn)
    {
        cout<<0<<endl;
    }
    else if(num>=mx)
    {
        cout<<n<<endl;
    }
    else{
    int ret=fun(a,n,num);
    cout<<ret<<endl;
    }
    d--;
}



return 0;
}
