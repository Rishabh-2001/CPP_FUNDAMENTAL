#include<bits/stdc++.h>
using namespace std;
int main()
{
int target;
cin>>target;
int m,n;
cin>>m;
int a[1000];

for(int i=0;i<m;i++)
{
    cin>>a[i];
}
cin>>n;
for(int i=m;i<(m+n);i++)
{
    cin>>a[i];
}



int t=m+n;
sort(a,a+t);


int cnt=1;
for(int i=0;i<t;i++)
{
    if(a[i]==cnt)
    {
        cnt++;
    }
}
if(cnt>target)
{
    cout<<"I become the guy."<<endl;
}
else{
    cout<<"Oh, my keyboard!"<<endl;
}
delete[]a;
return 0;
}
