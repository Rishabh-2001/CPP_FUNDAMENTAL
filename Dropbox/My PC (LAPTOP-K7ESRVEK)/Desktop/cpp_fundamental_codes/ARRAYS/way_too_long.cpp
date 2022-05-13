#include<bits/stdc++.h>
using namespace std;
string fun(string s)
{
    string ans;
    int n=s.length();
    if(n<=10)
    {
        return s;
    }
    else{
        ans.push_back(s[0]);
        string num=to_string(n-2);
        ans.append(num);
        ans.push_back(s[n-1]);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        string ans=fun(s);
        cout<<ans<<endl;
        t--;
    }
return 0;
}
