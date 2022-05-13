#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n;
int x,y;
cin>>n>>x>>y;
long int*a=new long int[n];
for(long int i=0;i<n;i++)
{
    cin>>a[i];
}
for(long int i=0;i<n;i++)
{
   long int lim;
   long int key=a[i];
   long int j;
    if(i+y>n)
    {
        lim=n-1;
    }
    else{
        lim=i+y;
    }
    for( j=i+1;j<=lim;j++)
    {
        if(a[j]>key)
        {
            continue;
        }
        else{
            break;
        }
    }
    if(j>lim)
    {
        j=i;
        if(j<x)
        {
            lim=0;
        }
        else{
            lim=j-x;
        }
        for(j=i-1;j>=lim;j--)
        {
            if(key<a[j])
            {
                continue;
            }
            else{
                break;
            }
        }
        if(j<lim)
        {
            cout<<i+1<<endl;
            break;
        }
        else{
            continue;
        }
    }
}


return 0;
}
