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
    if(n<=1399)
    {
        cout<<"Division 4"<<endl;
    }
    else if(n>=1400&&n<=1599)
    {
        cout<<"Division 3"<<endl;
    }
    else if(n>=1600&&n<=1899)
    {
        cout<<"Division 2"<<endl;
    }
    else{
        cout<<"Division 1"<<endl;
    }

    t--;
}


return 0;
}
