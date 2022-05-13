#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n>0)
{
    int a;
    cin>>a;
    int cnt=0;
    int rem=32768%a;
    if(rem%8==0)
    {
        while(a%32768!=0)
        {
            a=a*2;
            cnt++;
        }
    }
    else{
            while(rem%8!=0)
            {
                a++;
                cnt++;
                rem=32768%a;
            }
            while(a%32768!=0)
            {
                a=a*2;
                cnt++;
            }
    }
    cout<<cnt<<endl;




    n--;
}


return 0;
}
