#include<bits/stdc++.h>
using namespace std;

bool isfun(int f,int a[100],int d,int n)
{
    if(f==d)
    {

        return true;
    }
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int val=a[l]+a[r];
        if(val+f<=d)
        {
            return true;
        }
        else if(val+f>d)
        {
            r--;
        }
    }
    return false;

}
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int i;
    for( i=0;i<n;i++)
    {
        if(isfun(a[i],a,d,n))
        {
            continue;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"YES"<<endl;
    }



    t--;
}


return 0;
}
