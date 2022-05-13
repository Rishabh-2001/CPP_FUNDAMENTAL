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
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d;
    for(int i=0;i<n;i++)
    {
        d=a[i+1]-a[i];
        if(d>3)
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        else{
            if(d==1)
            {
                continue;
            }
            else if(d==2||d==3)
            {

            }
        }
    }



    t--;
}


return 0;
}
