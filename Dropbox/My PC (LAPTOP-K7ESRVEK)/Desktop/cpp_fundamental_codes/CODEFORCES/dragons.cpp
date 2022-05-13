#include<bits/stdc++.h>
using namespace std;
int main()
{
int s,n;
cin>>s;
cin>>n;
int flag=0;
int w=0;
pair<int,int>p;
vector<pair<int,int>>a;
while(n>0)
{
    int x,y;
    cin>>x>>y;
    p.first=x;
    p.second=y;
    a.push_back(p);
    n--;
}
sort(a.begin(),a.end());
for(int i=0;i<a.size();i++)
{
    if(a[i].first<s)
    {
        s=s+a[i].second;
        w++;
    }
    else{
            flag=1;
        cout<<"NO"<<endl;
    break;
    }
}
if(flag==0)
{
    cout<<"YES"<<endl;
}


return 0;
}
