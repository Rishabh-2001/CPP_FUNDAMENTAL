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
    sort(a,a+n);
    int cnt=1;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
            if(cnt==3)
            {
                cout<<a[i]<<endl;
                flag=1;
                break;
            }
        }else{
          cnt=1;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }




    t--;
}


return 0;
}
