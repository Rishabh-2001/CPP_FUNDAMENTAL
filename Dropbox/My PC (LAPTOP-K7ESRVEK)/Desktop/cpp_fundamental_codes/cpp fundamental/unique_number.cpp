//UNIQUE NUMBER 2N+1
//GIVEN A LIST OF NUMBERS WHERE EVERY NUMBER OCCURS TWICE EXCEPT ONE,
// WE HAVE TO FIND THAT NUMBER
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        ans=ans^num;   // BITWISE XOR OPERATOR
                          // xor of same number is 0 and xor of 0 with any number is number itself.
    }
    cout<<"Unique number is: "<<ans<<endl;
}
