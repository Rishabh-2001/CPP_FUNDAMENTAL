#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n,x;
    cin>>n>>x;
    int mx;
    int*a=new int[n];
    int sum=0;
    int i=0;
    while(i<n)
    {
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);

        i++;
    }
    if(sum!=x)
    {
        cout<<"YES"<<endl;
        if(x>mx)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=n-1;i>=0;i--)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"NO"<<endl;
    }



    t--;
}


return 0;
}
