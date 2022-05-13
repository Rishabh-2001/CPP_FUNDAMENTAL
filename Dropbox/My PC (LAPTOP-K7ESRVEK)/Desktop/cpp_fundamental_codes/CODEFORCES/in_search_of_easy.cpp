#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int*a=new int[n];
int ans;
int cnte=0;
int flag=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]==0)
    {
        cnte++;
    }
    if(a[i]==1)
    {
        flag=1;
    }
}
if(flag==1)
{
    cout<<"HARD"<<endl;
}
else if(cnte>n/2){
    cout<<"EASY"<<endl;
}

return 0;
}
