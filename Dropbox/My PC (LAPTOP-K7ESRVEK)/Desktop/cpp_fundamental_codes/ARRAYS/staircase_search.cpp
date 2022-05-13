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
   cout<<"Enter the key:"<<endl;
   int key;
   cin>>key;
   int sr=0;
   int sc=0;
   int er=m-1;
   int ec=n-1;
   int flag=0;
   while(ec>=sc&&er>=sr)
   {
       if(a[sr][ec]==key)
       {
           flag=1;
           cout<<key<<" found ."<<endl;
           break;
       }
       else if(a[sr][ec]<key)
       {
           sr++;
       }
       else if(a[sr][ec]>key)
       {
           ec--;
       }

   }
   if(flag==0){
   cout<<"not found"<<endl;
   }
   return 0;
}
