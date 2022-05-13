#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        sort(s.begin(),s.end());

        char cnt='a';
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==cnt)
            {
                cnt++;
            }

        }
        if(cnt>'z')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}
