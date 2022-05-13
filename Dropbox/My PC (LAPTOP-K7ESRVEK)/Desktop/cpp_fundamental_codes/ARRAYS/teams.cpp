#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans=0;
    int cnt=0;
   int*a=new int[3];
    while(t>0)
    {
        cnt=0;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                cnt++;
            }
        }
        if(cnt>=2)
        {
            ans++;
        }
        t--;
    }
  cout<<ans<<endl;
return 0;
}
