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
    int*a=new int[n];
    int mxi=-1;
    int mni=-1;
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            mxi=i;
        }
        if(a[i]<mn)
        {
            mn=a[i];
            mni=i;
        }
    }
    n=n-1;
    int ans=0;
    int op1=min((mni-0),(n-mni))+1;
    int op2=min((mxi-0),(n-mxi))+1;
    int op3=abs(mni-mxi);
    ans=min(min((op1+op2),(op1+op3)),(op2+op3));
    cout<<ans<<endl;





    t--;
}

return 0;
}
