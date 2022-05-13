#include<bits/stdc++.h>
using namespace std;

int count_cubes(unsigned long long int n)
{
    unsigned long long int k=1;
    int cnt=0;
    while((k*k)*k<=n)
    {
        cnt++;
        k++;
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        unsigned long long int n;
        cin>>n;
        long long int x=sqrt(n);
        long long int ans;
        ans=count_cubes(n);
        ans+=x;
        cout<<ans-1<<endl;

        t--;
    }



return 0;
}
