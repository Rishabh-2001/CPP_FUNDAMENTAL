#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int a;
    cin>>a;
    int b=10;
stack<int>s;
    while(a!=0)
    {
        int rem=a%b;

        if(rem!=0){
        s.push(rem);
        }
        a=a-rem;
        b=b*10;
    }

    cout<<s.size()<<endl;
    while(!s.empty())
    {

            int top=s.top();
            s.pop();
            cout<<top<<" ";
    }

    t--;
}


return 0;
}
