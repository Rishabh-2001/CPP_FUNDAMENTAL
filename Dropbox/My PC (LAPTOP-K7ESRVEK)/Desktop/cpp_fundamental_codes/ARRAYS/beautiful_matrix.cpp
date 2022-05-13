#include<iostream>
using namespace std;
int main()
{
 int n=5;
 int**a=new int*[n];
 for(int i=0;i<n;i++)
 {
     a[i]=new int[n];
 }
 int l,r;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         cin>>a[i][j];
         if(a[i][j]==1)
         {
             l=i;
             r=j;
         }

     }
 }
 int ans=abs(l-2)+abs(r-2);
 cout<<ans<<endl;

return 0;
}
