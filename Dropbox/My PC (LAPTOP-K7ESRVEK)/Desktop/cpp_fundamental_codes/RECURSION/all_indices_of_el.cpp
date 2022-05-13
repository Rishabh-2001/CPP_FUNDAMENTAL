/*
#include<iostream>
using namespace std;

int findKey(int a[],int n,int key,int output[])
{
     if(n<=0)
    {
        return 0;
    }
   int ans=findKey(a+1,n-1,key,output);

   if(a[0]==key)
   {
       if(ans!=0)
       {
           for(int i=ans-1;i>=0;i--)
           {
               output[i]++;
               output[i+1]=output[i];
           }

       }
           output[0]=0;
           return ans+1;

   }
   else
   {
       for(int i=ans-1;i>=0;i--)
       {
           output[i]++;

       }
       return ans;
   }





}
int main()
{

    int n;
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *output=new int[0];
    cout<<"Eter key"<<endl;
    int key;
    cin>>key;
    int anss= findKey(arr,n,key,output);
    for(int i=0;i<anss;i++)
    {
        cout<<output[i]<<" ";
    }
    delete []arr;
   return 0;
}
*/

#include<iostream>
using namespace std;


 int findAll(int a[],int n,int key,int output[])
 {
 	if(n<=0)
 	{
 		return 0;
 	}
 	int smallAns=findAll(a+1,n-1,key,output);

     if(a[0]==key)
     {
     	if(smallAns!=0)
     	{
     		for(int i=smallAns-1;i>=0;i--)
     		{
     			output[i]++;
     			output[i+1]=output[i];
     		}
     		output[0]=0;
     		smallAns++;
     	}
     	else{
     		output[0]=0;
     		smallAns++;
     	}
     }
     else{
     	for(int i=0;i<smallAns;i++)
     	{
     		output[i]++;
     	}

     }

 	return smallAns;


 }


int  main()
{
   int n;
   cin>>n;
   int*arr=new int[n];
   for(int i=0;i<n;i++)
   {
   	  cin>>arr[i];
   }
   int*output=new int[0];
   int key;
   cout<<"Enter key:"<<endl;
   cin>>key;
   int s=findAll(arr,n,key,output);
   for(int i=0;i<s;i++)
   {
   	  cout<<output[i]<<" ";
   }
   delete[]arr;
   delete[]output;
   return 0;

}
