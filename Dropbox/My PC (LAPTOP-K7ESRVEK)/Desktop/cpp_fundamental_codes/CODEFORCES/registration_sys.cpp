#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<string>a;
unordered_map<string,int>mp;
for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    mp[s]++;
    if(mp[s]<=1)
    {
        cout<<"OK"<<endl;
    }
    else{
        cout<<s<<mp[s]-1<<endl;
    }
}


return 0;
}
