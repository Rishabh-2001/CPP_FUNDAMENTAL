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
        vector<pair<int,int>>v;
        priority_queue<int>pq;
        while(n>0)
        {
            pq.push(n);
            n--;
        }
        while(pq.size()!=1)
        {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            v.push_back({a,b});
            double ans=((1.0*a)+b)/2.0;
            int res=round(ans);
            pq.push(res);
        }
        int s=pq.top();
        pq.pop();
        cout<<s<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        t--;
    }



return 0;
}
