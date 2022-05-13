#include<iostream>
using namespace std;
int count_st(int a[],int n,int k)
{
    int cnt=0;
    int val=a[k-1];

    for(int i=0;i<n;i++)
    {
        if(a[i]>=val&&a[i]>0)
        {
            cnt++;
        }
        else{
            break;
        }
    }
    return cnt;

}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=count_st(a,n,k);
    cout<<ans<<endl;
return 0;
}
