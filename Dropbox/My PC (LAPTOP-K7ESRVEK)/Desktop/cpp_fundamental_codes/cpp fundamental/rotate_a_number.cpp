/*
  Rotate A Number
  1. You are given two numbers n and k. You are required to rotate n, k times to the right. If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
2. Take as input n and k.
3. Print the rotated number.
4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
   n = 12340056
   k = 3
   r = 05612340

   TAKE CARE OF THE CASES OF K>LEN_OF_NO AND K<0.
   */
   #include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int d;
    int m;
    int cnt=0;
    int num=n;
    while(num!=0)
    {
        num=num/10;
        cnt++;
    }
     if(k<0)
    {
        k=k*(-1);
        if(k>cnt)
        {
            k=k%cnt;
        }
        k=cnt-k;
    }

    if(k>cnt)
    {
        k=k%cnt;
    }

    int a=pow(10,k);
     d=n%a;
     m=n/a;
     int cntb=0;
     int m2=m;
     while(m2!=0)
     {
         m2=m2/10;
         cntb++;
     }
    int b=pow(10,cntb);
     int ans=d*b+m;
     cout<<ans<<endl;




    //write your code here

}
