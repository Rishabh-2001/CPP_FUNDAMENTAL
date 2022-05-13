#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int a;
cin>>a;
int cntf=0;
int cnts=0;
if(a<=10)
{
    cout<<"NO"<<endl;
}
else{
    while(a!=0)
    {
        unsigned long long int r=a%10;
        if(r==4)
        {
            cntf++;
        }
        else if(r==7)
        {
            cnts++;
        }
        a=a/10;
    }

        if((cntf>0||cnts>0)&&((cntf+cnts==4)||(cntf+cnts==7)))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


return 0;
}
