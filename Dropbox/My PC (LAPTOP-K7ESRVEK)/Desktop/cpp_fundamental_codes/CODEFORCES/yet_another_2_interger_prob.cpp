#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    long int a,b;
    cin>>a>>b;
    int diff=abs(a-b);
    double i=diff/10.0;
   long  int s=i;
    if(i>s)
    {
        cout<<s+1<<endl;
    }
    else{
        cout<<s<<endl;
    }




    t--;
}


return 0;
}
