#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,n,w;
cin>>k>>n>>w;
int sum=(2*k)+(w-1)*k;
sum=(sum*w)/2;
if(n>=sum)
{
    cout<<0<<endl;
}
else{
cout<<sum-n<<endl;
}

return 0;
}
