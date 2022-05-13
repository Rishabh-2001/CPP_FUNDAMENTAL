#include<bits/stdc++.h>
using namespace std;
bool fun(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int d=a[i+1]-a[i];
        if(d>1)
        {
            return false;
        }
    }

    return true;

}
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    bool ans=fun(a,n);
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    t--;
}


return 0;
}
