#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    unsigned long int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a==0&&b==0&&c==0)
    {
       if(x>0||y>0)
       {
           cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
    else if(a>=x)
    {
        if(b+c>=y)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(a<x)
    {
        if(a+c>=x)
        {
            c=c-a;
            if(b+c>=y)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }




    t--;
}

return 0;
}
