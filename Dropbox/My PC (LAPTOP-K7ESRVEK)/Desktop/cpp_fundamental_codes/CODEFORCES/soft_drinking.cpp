#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int drink_avail=(k*l)/(n*nl);
int lemon_avail=c*d/n;
int salt_avail=p/(np*n);
int ans=min(drink_avail,min(lemon_avail,salt_avail));

cout<<ans<<endl;
return 0;
}
