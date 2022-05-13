#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

              //  54 654
bool compare(string a,string b)
{
   string first=a+b;  //
   string second=b+a; //54654
   for(int i=0;i<first.size();i++)
   {
       if(first[i]>second[i])
       {
           return true;   //no swap
       }
       else if(first[i]<second[i])
       {
           return false;   //swap
       }
    }
       return false;

}


int main()
{
    int n;
    cin>>n;



    vector<string>a;
    for(int i=0;i<n;i++)
    {
       string el="";
       cin>>el;
       a.push_back(el);
    }
    string res="";
    sort(a.begin(),a.end(),compare);

    for(int j=0;j<n;j++)
    {
        //res.append(a[i]);
        cout<<a[j]<<" ";
    }
    return 0;



}
