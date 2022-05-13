#include<bits/stdc++.h>
using namespace std;
int main()
{
int c;
long unsigned int n;
cin>>c;
cin>>n;
int*sc=new int[c];
for(int i=0;i<c;i++)
{
    cin>>sc[i];
}

priority_queue<pair<float,pair<long unsigned int,vector<int>>>>pq;
while(n>0)
{
   long unsigned int sid;
    float perc;
    int c1,c2,c3;
    cin>>sid>>perc>>c1>>c2>>c3;
    vector<int>pref;
    pref.push_back(c1);
    pref.push_back(c2);
    pref.push_back(c3);
    pq.push({perc,{sid,pref}});
    n--;
}
while(pq.size()>0)
{
     pair<float,pair<long unsigned int,vector<int>>>top_el=pq.top();
     pq.pop();
     float p1;
     p1=top_el.first;
     long unsigned int si1=top_el.second.first;
     vector<int>pref1=top_el.second.second;
     if(!pq.empty()){
     if(p1==pq.top().first)
     {
         if(si1>pq.top().second.first)
         {
                  pair<float,pair<long unsigned int,vector<int>>>top_el2=pq.top();
                  pq.pop();
                   pq.push({p1,{si1,pref1}});
                   float p2=top_el2.first;
                  long unsigned int si2=top_el2.second.first;
                   vector<int>pref2=top_el2.second.second;
                    for(long unsigned int i=0;i<pref2.size();i++)
                   {
                     if(sc[pref2[i]-1]>0)
                     {
                         cout<<"Student-"<<si2<<" C-"<<pref2[i]<<endl;
                         sc[pref2[i]-1]--;
                         break;
                     }
                   }

         }
         else{
             for(long unsigned int i=0;i<pref1.size();i++)
             {
                 if(sc[pref1[i]-1]>0)
                 {
                     cout<<"Student-"<<si1<<" C-"<<pref1[i]<<endl;
                     sc[pref1[i]-1]--;
                     break;
                 }
             }
         }
     }
     }
     else{
             for(long unsigned int i=0;i<pref1.size();i++)
             {
                 if(sc[pref1[i]-1]>0)
                 {
                     cout<<"Student-"<<si1<<" C-"<<pref1[i]<<endl;
                     sc[pref1[i]-1]--;
                     break;
                 }
             }
        }
}
delete[]sc;
return 0;
}
