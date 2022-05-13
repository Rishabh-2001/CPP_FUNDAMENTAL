#include<iostream>
using namespace std;
int main()
{
   int m,n;
   cout<<"Enter rows and coloumns of the array:"<<endl;
   cin>>m>>n;
   char a[m][100];
   cout<<"Enter array element:"<<endl;
   fflush(stdin);
   for(int i=0;i<m;i++)
   {

           gets(a[i]);

   }
    for(int i=0;i<m;i++)
   {

           cout<<a[i];
           cout<<endl;
   }
}

