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
   int sr=0;
   int sc=0;
   int er=m-1;
   int ec=n-1;
   while(sr<=er&&sc<=ec)
   {
       for(int i=sc;i<=ec;i++)
       {
           cout<<a[sr][i]<<",";
       }
       sr++;
       for(int i=sr;i<=er;i++)
       {
           cout<<a[i][ec]<<",";
       }
       ec--;
       for(int i=ec;i>=sc;i--)
       {
           cout<<a[er][i]<<",";
       }
       er--;
       for(int i=er;i>=sr;i--)
       {
           cout<<a[i][sc]<<",";
       }
       sc++;
   }

}
