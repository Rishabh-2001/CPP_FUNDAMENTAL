#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}
bool isFactorial(long long int n)
{
  for (int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }

  if (n == 1) {
    return true;
  }
  else {
    return false;
  }
}
int count_num(long long int n)
{
    int ans=1;
    if(isPowerOfTwo(n))
    {
       return 1;
    }
    else if(isFactorial(n))
    {
        return 1;
    }
    return 1+count_num(n-1);
}
int main()
{
int t;
cin>>t;
while(t>0)
{
    long long int n;
    cin>>n;
    int ans=count_num(n);
    cout<<ans<<endl;
    t--;
}

return 0;
}
