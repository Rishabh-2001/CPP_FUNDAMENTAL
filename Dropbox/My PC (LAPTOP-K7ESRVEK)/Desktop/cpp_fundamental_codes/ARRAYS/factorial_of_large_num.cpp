#include<iostream>
#include<vector>
using namespace std;

int multiply(int x,int res[],int res_size)
{
    int carry=0;
    for(int i=0;i<res_size;i++)
    {
        int product=x*res[i]+carry;
        res[i]=product%10;
        carry=product/10;

    }
    while(carry>0)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{
    int res[1000];
    //vector<int>res;
    res[0]=1;
    int res_size=1;
    for(int i=2;i<=n;i++)
    {
        res_size=multiply(i,res,res_size);
    }
    cout<<"factorial of the numer is :"<<endl;
    for(int j=res_size-1;j>=0;j--)
    {
        cout<<res[j];
    }
    return ;
}

int main()
{

    int n;
    cin>>n;
    int a[1000];
    factorial(n);
    return 0;


}
