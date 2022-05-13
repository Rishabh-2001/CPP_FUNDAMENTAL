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
        string s;
        cin>>s;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='U')
            {
                ans+='D';
            }
            else if(s[i]=='D')
            {
                ans+='U';
            }
            else{
                ans+=s[i];
            }

        }
        cout<<ans<<endl;


        t--;
    }



return 0;
}
