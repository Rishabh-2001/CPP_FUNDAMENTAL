#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int n;
unsigned long long int k;
cin>>n>>k;
if(k<=(n+1)/2)
{
    cout<<(2*k)-1<<endl;
}
else{
    cout<<(k-(n+1)/2)*2<<endl;
}

return 0;
}
