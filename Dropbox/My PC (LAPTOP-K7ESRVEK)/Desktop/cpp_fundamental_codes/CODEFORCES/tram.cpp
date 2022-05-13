#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int lm=n;
int mxsum=INT_MIN;
 int currsum=0;
while(n>0)
{
    int a,b;
    cin>>a>>b;
    if(n==lm)
    {
        currsum=b;
    }
    else{
        currsum=currsum-a;
        currsum=currsum+b;
    }
    mxsum=max(mxsum,currsum);
    n--;
}
cout<<mxsum<<endl;
return 0;
}
