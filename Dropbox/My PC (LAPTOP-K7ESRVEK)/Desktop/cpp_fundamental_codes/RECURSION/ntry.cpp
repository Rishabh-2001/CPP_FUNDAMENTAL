#include<iostream>
using namespace std;



bool check_sorted(int a[],int n)
{
	for(int i=0;i<n-1;)
	{
	   if(a[i]<=a[i+1])
	   {
           i++;
	   }
	   else{
          return false;
	   }

	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int b=4;
	int nn=n&b;
	cout<<"ans:"<<nn<<endl;
	int*a=new int[n];
	for(int i=0;i<n;i++)
	{
	   cin>>a[i];
	}

	int minidx;
	for(int i=0;i<n-1;i++)
	{
	    minidx=i;
	   for(int j=i+1;j<n;j++)
	   {
	      if(a[j]<=a[minidx])
	      {
	         minidx=j;
	      }
	   }
	    int andVal=a[i]&a[minidx];
	    if(andVal!=0)
	    {
	      int t=a[i];
	      a[i]=a[minidx];
	      a[minidx]=t;
	    }
	}
    bool res=check_sorted(a,n);
    if(res==true)
    {
       cout<<"Yes"<<endl;
    }
    else{
    cout<<"No"<<endl;
    }
    delete[]a;
    return 0;
}
