#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n;
cin>>n;
int cnt,cnt2,cnt3,cnt4;
while(n>0)
{
    int a;
    cin>>a;
    if(a==1)
    {
        cnt++;
    }
    else if(a==2)
    {
        cnt2++;
    }
    else if(a==3)
    {
        cnt3++;
    }
    else{
        cnt4++;
    }
    n--;
}
int num=0;
num=num+cnt4;
cnt4=0;
int dec=min(cnt,cnt3);
cnt=cnt-dec;
cnt3=cnt3-dec;
num=num+dec;
if(cnt==0)
{
    num=num+cnt3;
    cnt3=0;
    cnt=0;
}
int pair_two=cnt2/2;
num=num+pair_two;
int rem2=cnt2%2;
if(rem2==1)
{
    if(cnt==0)
    {
        num=num+1;
        rem2=0;
        cnt2=0;
    }
    else{
        int sum=cnt/2;
        int sumrem=cnt%2;
        if(sumrem!=0){
        num=num+1;
        sumrem=0;
        rem2=0;
        }
        else{
            int total=sum*2;
            int totaldiv=total/4;
            int totalrem=total%4;
            cnt=0;
            sum=0;
            num=num+totaldiv;
            if(totalrem==1)
            {
                num=num+1;
            }

        }


    }
}
else{
    int total=cnt;
    cnt=0;
    int totaldiv=total/4;
            int totalrem=total%4;


            num=num+totaldiv;
            if(totalrem==1)
            {
                num=num+1;
            }

}
cout<<num<<endl;




return 0;
}
