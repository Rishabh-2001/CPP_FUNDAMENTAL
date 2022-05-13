#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int*a=new int[t];
    for(int i=0;i<t;i++)
    {
        a[i]=i+1;
    }
    vector<int>ans;
    vector<vector<int>>res;
    int l=0;
    int r=t-1;
    while(l<r)
    {
        int sum=a[l]+a[r];
        if(sum%2==0)
        {
            ans.push_back(a[l]);
            ans.push_back(a[r]);
            res.push_back(ans);
            int temp=sum/2;
            a[l]=tmep;
            r--;
        }
        else{
            l++;
        }
    }
    cout<<a[l]<<endl;
    for(int i=0;i<res.size();i++)
    {
        for(int i:res)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }



    t--;
}


return 0;
}
