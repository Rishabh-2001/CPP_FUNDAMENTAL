#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
unordered_map<int,int>mp;
while(n>0)
{
    int a;
    cin>>a;
    mp[a]++;
    if(a%2==0)
    {
        cout<<a/2<<endl;
    }
    else{
            if(mp[a]>1)
            {
                if(a<0)
                {
                    a=a*(-1);
                    int ans=(a+1)/2;
                    cout<<(-1)*ans<<endl;
                }
                else{
                    cout<<(a+1)/2<<endl;
                }
                mp[a]--;
                mp[a]--;
            }
            else{
                cout<<a/2<<endl;
            }
    }
    n--;
}



return 0;
}
