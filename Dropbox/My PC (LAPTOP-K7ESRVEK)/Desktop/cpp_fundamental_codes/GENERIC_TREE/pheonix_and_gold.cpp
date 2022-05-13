#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
  int n,x;
  cin>>n>>x;
  int*a=new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  string ans;

  int l=0;
  int r=n-1;
  int c=0;
  while(l<r)
  {
      if(c+a[l]!=x)
      {
          ans+=to_string(a[l]);
          l++;
      }
      else if(c+a[r]!=x)
      {
          ans+=to_string(a[r]);
          r--;
      }
  }
  for(int i=0;i<ans.length();i++)
  {
      cout<<ans[i]<<" ";
  }
  cout<<endl;


    t--;
}


return 0;
}
