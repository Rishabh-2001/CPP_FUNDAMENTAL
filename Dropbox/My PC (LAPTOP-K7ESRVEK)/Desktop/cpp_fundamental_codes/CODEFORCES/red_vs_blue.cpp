#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    string ans;
    int n;
    int r,b;
    cin>>n;
    cin>>r>>b;
    string three="RRR";
    string two="RR";
    string one="R";
    int gap=abs(r-b);
    int rep=0;
    if(b%2==0&&(gap%2==0&&r%2==0))
    {
        rep=(gap-2)/2;
    }
    else{
        rep=gap/2;
    }
//    cout<<rep<<endl;
    if(rep<=1)
    {
        while(r>0&&b>0)
        {
            ans+="R";
            ans+="B";
            r--;
            b--;
        }
        if(r!=0)
        {
            while(r!=0)
            {
                ans+="R";
                r--;
            }
        }
        if(b!=0)
        {
            while(b!=0)
            {
                ans+="B";
                b--;
            }
        }
    }
    else if(rep==2)
    {
         while(r>0&&b>0)
        {
            ans+=two;
            ans+="B";
            r=r-2;
            b--;
        }
        if(r>0)
        {
            while(r>0)
            {
                ans+="R";
                r--;
            }
        }
        if(b>0)
        {
            while(b>0)
            {
                ans+="B";
                b--;
            }
        }
//        cout<<ans<<endl;
    }
    else if(rep==3)
    {
        while(r>0&&b>0)
        {
            ans+=three;
            ans+="B";
            r=r-3;
            b--;
        }
        if(r!=0)
        {
            while(r!=0)
            {
                ans+="R";
                r--;
            }
        }
        if(b!=0)
        {
            while(b!=0)
            {
                ans+="B";
                b--;
            }
        }
    }
    else{
        string alag;
        int dec=rep;
        while(rep>0)
        {
            alag+="R";
            rep--;
        }
         while(r>0&&b>0)
        {
            ans+=alag;
            ans+="B";
            r=r-dec;
            b--;
        }
        if(r!=0)
        {
            while(r!=0)
            {
                ans+="R";
                r--;
            }
        }
        if(b!=0)
        {
            while(b!=0)
            {
                ans+="B";
                b--;
            }
        }


    }
    cout<<ans<<endl;

    t--;
}


return 0;
}
