#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int*a=new int[7];
for(int i=0;i<7;i++)
{
    cin>>a[i];
}
int ans=-1;
int csum=0;
int k=0;
while(csum<n)
{
    csum=csum+a[k];
    if(csum>=n)
    {
        cout<<k+1<<endl;
        break;
    }
    k++;
    if(k==7)
    {
        k=0;
    }
}

return 0;
}
