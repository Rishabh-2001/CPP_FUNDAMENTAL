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

   //WAVE PRINT
   int sr=0;
   int sc=0;
   int er=m-1;
   int ec=n-1;
   cout<<"Wave print of array is:"<<endl;
   while(sc<=ec)
   {
       if(sc%2==0)
       {
           for(int i=sr;i<=er;i++)
           {
               cout<<a[i][sc]<<" , ";
           }
           sc++;
       }
       else
        {
            for(int i=er;i>=0;i--)
            {
                cout<<a[i][sc]<<" , ";
            }
            sc++;
       }
   }





}
