#include<bits/stdc++.h>
using namespace std;
int distinct(int a[],int n)
{
    int ld;
    int ans;
     for(int i=0;i<n-1;i++)
    {
       if(i==0)
       {
           ld=a[i];
           ans=i;
       }
       else{
           if(ld!=a[i]&&i!=n-1)
           {
                 if(a[i]==a[i+1])
                 {
                     return ans+1;
                 }
                 else{
                    if(a[i+1]==ld)
                    {
                        ld=a[i];
                        return i+1;
                    }

                 }
       }
       else if(i==n-1)
       {
           return n;
       }
    }
}

}
int main()
{
int t;
cin>>t;
while(t>0)
{
    int ld;
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<distinct(a,n)<<endl;

t--;
}

return 0;
}
