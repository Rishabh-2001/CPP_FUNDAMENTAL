#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

int rainwater(int v[],int n)
{

    int mgl[n];
    int mgr[n];
    mgl[0]=v[0];


    for(int i=1;i<n;i++)
    {
        mgl[i]=max(mgl[i-1],v[i]);
    }
    mgr[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        mgr[i]=max(mgr[i+1],v[i]);
    }
int area[n];
    for(int i=0;i<n;i++)
    {
       area[i]=min(mgl[i],mgr[i])-v[i];
    }

    int total_area=0;
    for(int i=0;i<n;i++)
    {
        total_area=total_area+area[i];

    }

    return total_area;
}
int main()
{
    int n;
    cin>>n;
    int*v=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<",";
    }
    cout<<endl;
    int ans=rainwater(v,n);
    cout<<"Total water stored is :"<<ans<<endl;
    return 0;



}
