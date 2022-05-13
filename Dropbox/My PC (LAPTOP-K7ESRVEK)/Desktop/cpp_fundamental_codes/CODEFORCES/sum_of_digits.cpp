#include<bits/stdc++.h>
using namespace std;

int main()
{
string n;
cin>>n;
int len=n.length();
int ans=0;
if(len==1&&n[0]=='0')
{
    cout<<ans<<endl;
}
else{
        int e=n.length()-1;
//        cout<<n[e]<<endl;
        while(e>=0&&n[e]=='0')
        {
            e--;
        }
        if(e<0)
        {
            cout<<ans<<endl;
        }
        else{
            for(int i=e;i>=0;i--)
            {
                 ans++;
            }
}

cout<<ans<<endl;


}
return 0;
}
