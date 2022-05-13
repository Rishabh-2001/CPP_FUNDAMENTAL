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
        unordered_map<int,int>mp;
        while(n>0)
        {
            int a;
            cin>>a;
            if(mp.count(a)>0)
            {
                a=a*(-1);
                if(mp.count(a)>0)
                {
                    mp[a]++;
                }
                else{
                    mp[a]++;
                }
            }
            mp[a]++;
            n--;
        }
        cout<<mp.size()<<endl;



        t--;
    }



return 0;
}
