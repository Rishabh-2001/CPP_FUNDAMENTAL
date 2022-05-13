#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
   long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int l=0;
    int r=n-1;
    int rs=0;
    int bs=a[l];
    l=1;
    int rc=0;

    int bc=1;
    while(l<r)
    {
        bs=bs+a[l];
        rs=rs+a[r];
        bc++;
        rc=rc+1;
        if(rs>bs&&rc<bc)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(rs==bs)
        {
            l++;
            r--;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }

    }
    if(l>=r)
    {
    cout<<"NO"<<endl;
    }

    t--;
}


return 0;
}
