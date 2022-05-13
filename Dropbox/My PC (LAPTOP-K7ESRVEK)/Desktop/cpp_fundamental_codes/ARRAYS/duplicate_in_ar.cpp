#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    int fsum=((n-1)*(n-2))/2;
    int asum=0;
    for(int i=0;i<n;i++)
    {
        asum=asum+a[i];
    }
    ans=asum-fsum;
    cout<<"duplicate no is:"<<ans<<endl;

}
