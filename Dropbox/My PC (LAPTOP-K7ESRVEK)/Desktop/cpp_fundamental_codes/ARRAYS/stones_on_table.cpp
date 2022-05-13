#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;

int ans=0;
int n;
cin>>n;
cin>>s;
for(int i=0;i<n-1;i++)
{
    if(s[i]==s[i+1])
    {
        ans++;
    }
}
cout<<ans<<endl;
return 0;
}
