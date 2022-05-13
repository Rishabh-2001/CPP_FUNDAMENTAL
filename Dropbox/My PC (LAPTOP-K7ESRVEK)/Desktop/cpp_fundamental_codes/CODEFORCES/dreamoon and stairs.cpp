#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  cin>>m;
  int steps=0;
  if(m==n)
  {
      cout<<n<<endl;
  }
  else if(n<m)
  {
      cout<<-1<<endl;
  }
  else{
    int s=n/2;
    int r=n%2;
    if(s%m==0&&r==0)
    {
        cout<<s<<endl;
    }
    else if(s%m==0&&r!=0)
    {
       cout<<s+1<<endl;
    }
    else{
          int rs=s%m;
          int s2=rs/2;
          s--;
          if(rs==1)
          {
              s++;
          }
          else if(rs>0){
                s=s+2;
          }
          cout<<s<<endl;
    }
  }




return 0;
}
