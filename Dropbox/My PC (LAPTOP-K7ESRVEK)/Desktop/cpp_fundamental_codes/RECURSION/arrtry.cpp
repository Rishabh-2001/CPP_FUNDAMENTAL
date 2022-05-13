
#include<iostream>

using namespace std;

void ArrayChallenge(int arr[],int arrLength)
{
    int mx;
int mn;
int smax=-99999;
int smin=99999;


mx=arr[0];
mn=arr[0];
for(int i=1;i<arrLength;i++)
{
	if(arr[i]<mn)
	{
	   mn=arr[i];
	}
	if(arr[i]>mx)
	{
	   mx=arr[i];
	}
}


for(int i=0;i<arrLength;i++)
{
	if(arr[i]<smin&&arr[i]!=mn)
	{
	   smin=arr[i];
	}
	if(arr[i]>smax&&arr[i]!=mx)
	{
	   smax=arr[i];
	}


}
	cout<<smin<<" "<<smax<<endl;

}

int main()
{
  int n;
  string s="abcdef";
   string q1=s.substr(0,1);
            string q2=s.substr(2);
            cout<<q1<<","<<q2<<endl;
 /* cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  //ArrayChallenge(a,n);
  return 0;
*/
}
/*
#include<iostream>
using namespace std;
int main ()
{
    int A[10], n, i, j, x;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout << "Second largest number : " << A[1];
    cout << "\nSecond smallest number : " << A[n - 2];
    return 0;
}
*/
