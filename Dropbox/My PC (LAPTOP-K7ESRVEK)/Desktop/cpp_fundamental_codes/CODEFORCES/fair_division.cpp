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
    int cntt=0;
    int cnto=0;

    while(n>0)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            cnto++;
        }
        else{
            cntt++;
        }
        n--;
    }
    int sum=2*cntt+cnto;
    if(sum%2==0&&n%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(cnto>0&&cntt<=0)
    {
        if(cnto%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(cntt>0&&cnto<=0)
    {
        if(cntt%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(cntt*2==cnto)
    {
        cout<<"YES"<<endl;
    }
    else if(cnto==cntt&&cnto%2==0)
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
