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
    int flag=0;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]&&count<=0)
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        else{
            count++;
        }
    }
    if(flag==0){
    cout<<"YES"<<endl;
    }



    t--;
}


return 0;
}
