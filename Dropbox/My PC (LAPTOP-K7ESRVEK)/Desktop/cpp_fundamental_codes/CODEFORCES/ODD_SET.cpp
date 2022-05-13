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
    int noe=0;
    int noo=0;
    int r=n*2;
    while(r>0)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            noe++;
        }
        else{
            noo++;
        }

        r--;
    }
    if(noo==noe)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    t--;
}


return 0;
}
