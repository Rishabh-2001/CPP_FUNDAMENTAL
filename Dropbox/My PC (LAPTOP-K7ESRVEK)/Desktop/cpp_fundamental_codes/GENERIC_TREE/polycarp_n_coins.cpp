#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
       long long int n;
       cin>>n;
       long long int c2;
       long long int c1;
       c2=round(n/3.0);
       long long int val=c2*2;
       c1=n-val;
       cout<<c1<<" "<<c2<<endl;


        t--;
    }



return 0;
}
