#include<bits/stdc++.h>
using namespace std;
int main()
{
//
//    int n;
//    cin>>n;
//    while(n>0){
//    string p;
//    string h;
//    cin>>p;
//    cin>>h;
//
//    int index;
//    index=h.find(p);
//
//    if(index!= string::npos)
//    {
//        cout<<"Yes"<<endl;
//    }
//    else{
//        cout<<"No"<<endl;
//    }
//
//    n--;
//    }
int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
vector<int>ans;
unordered_map<int,bool>mp;
for(int i=0;i<n;i++)
{
    if(mp.count(a[i])==true)
    {
        continue;
    }
    mp[a[i]]=true;
    ans.push_back(a[i]);

}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<",";
}

return 0;
}
