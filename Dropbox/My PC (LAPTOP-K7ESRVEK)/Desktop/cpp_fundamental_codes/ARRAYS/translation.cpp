#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string rev;
    string s2;
    cin>>s;
    cin>>s2;
    reverse(s.begin(),s.end());
    if(s==s2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}
