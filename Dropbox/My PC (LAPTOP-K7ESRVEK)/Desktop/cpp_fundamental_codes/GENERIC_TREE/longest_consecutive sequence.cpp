#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<int,bool>mp;
int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
   mp[a[i]]=false;
}

for(int i=0;i<n;i++)
{
    int key=a[i]-1;
    if(mp.count(key)>0)
    {
        continue;
    }
    else{
        mp[a[i]]=true;
    }
}
int ml=1;
int l,r;
int ansl,ansr;
for(int i=0;i<n;i++)
{
    int key=a[i];
    if(mp[key]==true)
    {
        int tl=1;
        int it=1;
        l=a[i];
        r=a[i];
        while(mp.count(key+it)>0)
        {
            it++;
            tl++;
        }
        r=key+it-1;;
        if(tl>ml)
        {
            ansl=l;
            ansr=r;
            ml=tl;
        }
    }

}
cout<<"Between "<<ansl<<" to "<<ansr<<endl;
    return 0;


return 0;
}
