#include<bits/stdc++.h>
using namespace std;
int main()
{
int r,c;
int flag=0;
cin>>r>>c;
int left=0;
int right=1;
int sameline=0;
  for(int i=0;i<r;i++)
{
      for(int j=0;j<c;j++)
      {
          if(i%2==0)
          {
              cout<<"#";
          }
          else{
                  if((i%2==1&&j==c-1)&&right==1)
                  {
                      if(sameline!=1)
                      {
                      cout<<"#";
                      left=1;
                      right=0;
                      }
                      else{
                        cout<<".";
                      }
                      sameline=0;
                  }
                  else if((i%2==1&&j==0)&&left==1)
                  {
                      cout<<"#";
                      left=0;
                      right=1;
                      sameline=1;
                  }
                  else{
                  cout<<".";
                  }
              }
      }
      cout<<endl;
  }





return 0;
}
