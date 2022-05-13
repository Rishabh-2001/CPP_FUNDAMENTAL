#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    if(y>n)
    {
        cout<<-1<<endl;
    }
    else if(y==n)
    {
        if(k==1)
        {
            cout<<-1<<endl;
        }
    }
    else{
         int f=y%k;
         int t=1;
            if((y+(k-f))<=n){
            cout<<(k-f)<<" ";
            }
            else{
                cout<<-1<<endl;
                return 0;
            }

        int temp=k-f;

        while(y+temp+(k*t)<=n)
        {
            cout<<temp+(k*t)<<" ";
            t++;
        }

    }





return 0;
}
