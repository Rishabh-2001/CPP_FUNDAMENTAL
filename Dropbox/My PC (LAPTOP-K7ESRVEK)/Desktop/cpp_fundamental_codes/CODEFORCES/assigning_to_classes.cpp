#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;

cin>>t;
while(t>0)
{
    int n;
cin>>n;
int s=2*n;
long long int*a=new long long int[s];
for(int i=0;i<s;i++)
{
    cin>>a[i];
}
sort(a,a+s);
long long int a1[n];
long long int b1[n];
int l=1;
int r=s-1;
int j=0;
while(l<=r)
{
    if(j%2==0){
    a1[j]=a[r];
    r=r-2;
    }
    else{
        a1[j]=a[l];
        l=l+2;
    }
    j++;
}
l=0;
r=s-2;
int k=0;
while(l<=r)
{
    if(k%2==0)
    {
        b1[k]=a[l];
        l=l+2;
    }
    else{
        b1[k]=a[r];
        r=r-2;
    }
    k++;
}
sort(a1,a1+n);
sort(b1,b1+n);

int idx=n/2;
long long int ans=abs(a1[idx]-b1[idx]);
cout<<ans<<endl;


    t--;
}



return 0;
}
