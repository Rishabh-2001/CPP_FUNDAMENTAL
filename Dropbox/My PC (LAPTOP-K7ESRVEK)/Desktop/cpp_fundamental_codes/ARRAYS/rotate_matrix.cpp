#include<iostream>
using namespace std;
int main()
{
   int m,n;
   cout<<"Enter rows and coloumns of the array:"<<endl;
   cin>>m>>n;
   int a[m][n];
   cout<<"Enter array element:"<<endl;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
   }
   for(int i=0;i<m;i++)
   {
       int l=0;
       int r=n-1;
       while(l<r)
       {
           int t=a[i][l];
           a[i][l]=a[i][r];
           a[i][r]=t;
           l++;
           r--;
       }

   }
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i<j)
           {
               int t=a[i][j];
               a[i][j]=a[j][i];
               a[j][i]=t;
           }
       }
   }
   cout<<"array after rotation is :"<<endl;
    for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<a[i][j]<<"    ";
       }
       cout<<endl;
   }
   return 0;
}
