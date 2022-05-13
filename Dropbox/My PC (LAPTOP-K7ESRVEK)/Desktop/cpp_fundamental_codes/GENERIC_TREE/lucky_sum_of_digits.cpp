#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string ans;
while(n>0&&n%7!=0)
{
    ans.push_back('4');
    n-=4;
}
while(n>0&&n%7==0)
{
    ans.push_back('7');
    n-=7;
}
if(n==0)
{
    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i];
    }
}
else{
    cout<<-1<<endl;
}


return 0;
}
