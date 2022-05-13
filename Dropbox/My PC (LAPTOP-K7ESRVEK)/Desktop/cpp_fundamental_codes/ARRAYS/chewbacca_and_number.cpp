#include<iostream>
#include<cmath>

using namespace std;
int main()
{

    long long int n;
    cin>>n;
    int len=0;
   long long int num=n;
    while(n!=0)   //
    {
        n=n/10;
        len++;
    }    //len=4
     //empty len=0
            int cnt=0;          //size=0;
     while(len>0)
     {

        long long int d=pow(10,len-1);   // d=1
        long long int r=num/d;           //r=5
         num=num%d;           //num=5
         int prev=r;      //prev=5
         if(9-r<prev)
            {
                if(9-r==0)
                {
                    if(cnt==0)
                    {

                        //ans.push_back(r);
                        cout<<r;
                        cnt=1;
                    }
                    else{
                        //ans.push_back(9-r);
                        cnt=1;
                        cout<<9-r;
                    }
                }
                else{
                 // ans.push_back(9-r);
                 cout<<9-r;
                 cnt=1;
                }

         }
         else{
           // ans.push_back(r);
           cout<<r;
           cnt=1;
         }
         len--;
     }




}
