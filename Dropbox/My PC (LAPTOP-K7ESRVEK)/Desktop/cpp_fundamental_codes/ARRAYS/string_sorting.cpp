#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    fflush(stdin);
    string s[100];
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    sort(s,s+n);   //LEXOGRAPHICAL COMAPRISON
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
//FOR OTHER COMPARISION BASES USE A COMPARATOR FUNCTION AND PASS IT IN SORT AS ARGUEMENT
