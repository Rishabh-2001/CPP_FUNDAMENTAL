#include<bits/stdc++.h>
using namespace std;
int game_cost(int a[],int n)
{
    if(n==2)
    {
        return 0;
    }
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==1&&a[i+1]==1)
        {
            continue;
        }
        else{
            ans++;
        }
    }
    return ans;
}
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int price=game_cost(a,n);
    cout<<price<<endl;


    t--;
}


return 0;
}
