#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;

int rev(int n)
{
    int temp=n;

    int ans=0;
    while(temp!=0)
    {
        int r=temp%10;
        ans=ans*10+r;
        temp=temp/10;
    }
    return ans;


}
int main()
{
   int m,n;
   cin>>m>>n;
   int a[1000];
   int b[1000];
   int lena=0;
   int temp_m=m;
   int temp_n=n;
   while(m!=0)
   {
       m=m/10;
       lena++;
   }
   int lenb=0;
   while(n!=0)
   {
       n=n/10;
       lenb++;
   }
   int i=0;
   int a_size=lena;
   int b_size=lenb;
   while(lena>0)
   {
       int d=pow(10,lena-1);
       int r=temp_m/d;         //array storing  num 1
       temp_m=temp_m%d;
       a[i]=r;
       lena--;
   }

   while(lenb>0)
   {
       int d=pow(10,lenb-1);  //array storing num 2
       int r=temp_n/d;
       temp_n=temp_n%d;
       b[i]=r;
       lenb--;
   }

   int j=n-1;
   int s=0;
   vector<int>pro;

   while(j>=0)
   {
       int num=0;
       int cnt=0;
       int ans;
       for(int i=n-1;n>=0;i--)
       {
           ans=a[i]*b[j]+cnt;
           if(ans>10)
           {
               cnt=ans/10;
               ans=ans%10;
           }
           num=num*10+ans;
       }
       int res=rev(num)*pow(10,s);
       pro.push_back(res);
       s++;
   }
   long long int sm=0;
   for(int s=0;s<pro.size();i++)
   {
       sm=sm+pro[s ];
   }
   cout<<sm;





}
