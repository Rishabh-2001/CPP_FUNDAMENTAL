#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,a,b;
cin>>n>>a>>b;
long long int reqArea=6*n;
long long int curr_ar=a*b;
if(curr_ar>=reqArea)
{
    cout<<curr_ar<<endl;
    cout<<a<<" "<<b<<endl;
}
else{


        if(reqArea%a==0)
        {
            long long int div=reqArea/a;
            b=div;
        }
        else if(reqArea%b==0){
            long long int div=reqArea/b;
            a=div;
        }
        else{
                while(true)
        {
             a++;
             if(reqArea%a==0)
             {
                  long long int div=reqArea/a;
                   b=div;
                   break;
             }
             else if(reqArea%b==0)
             {
                  long long int div=reqArea/b;
                   a=div;
                   break;
             }
        }
        }
    curr_ar=a*b;
    cout<<curr_ar<<endl;
    cout<<a<<" "<<b<<endl;

}

return 0;
}
