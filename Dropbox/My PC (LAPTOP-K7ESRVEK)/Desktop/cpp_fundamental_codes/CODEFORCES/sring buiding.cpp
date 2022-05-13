#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    string s;
    cin>>s;
    int cnt=1;
    int flag=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else{
            if(cnt<=1)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else{
                cnt=1;
            }

        }
    }
    if(flag==0)
    {

        if(cnt<=1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }



    t--;
}


return 0;
}
