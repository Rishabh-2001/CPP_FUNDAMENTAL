#include<bits/stdc++.h>
using namespace std;

long long int fun1(vector<pair<long long int,long long int>>&a,int key)
{
  long long  int l=0;
  long long  int r=a.size()-1;
   pair<long long int,long long int>ans;
   while(l<=r)
   {
       long long int m=(l+r)/2;
       if(a[m].first==key)
       {
           ans=a[m];
           break;
       }
       else if(a[m].first<key)
       {
           l=m+1;
       }
       else{
            r=m-1;
       }
   }
   return 1+ans.second;
}

int main()
{
long int n,m;
cin>>n;
vector<pair<long long  int,long long int>>a;
for(long long int i=0;i<n;i++)
{
long long int c;
    cin>>c;
    a.push_back({c,i});
}
sort(a.begin(),a.end());
cin>>m;
long long int p=0;
long long int v=0;

while(m>0)
{
    long long int b;
    cin>>b;
    long long int res=fun1(a,b);
    p+=res;
    v+=1+(n-res);

    m--;
}

    cout<<p<<" "<<v<<endl;





return 0;
}
