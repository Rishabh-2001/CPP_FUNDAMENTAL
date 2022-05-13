#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int k=0;
     int z=(n+1)/2;
     int a;
     for(int i=1;i<=n;i++)
     {
         a=0;
         if(i<=z){
         k++;
         }
         else
         {
             k--;
         }
         for(int j=1;j<=n;j++)
         {
             if(j>=z+1-k&&j<=z-1+k)
             {
                 cout<<a;
                  if(a<i&&a<j)
                {
                a++;
                }
                else{
                    a--;
                }
             }
             else
             {
                 cout<<" ";
             }
         }
         cout<<endl;
     }

 }
