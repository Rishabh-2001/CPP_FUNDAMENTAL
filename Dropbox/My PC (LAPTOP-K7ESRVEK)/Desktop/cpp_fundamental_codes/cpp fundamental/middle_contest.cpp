#include<bits/stdc++.h>
using namespace std;
int main()
{

string in;
string out;
cin>>in;
cin>>out;
int h1,m1,h2,m2;

string a=in.substr(0,2);
h1=stoi(a);
string b=in.substr(3);
m1=stoi(b);

string p=out.substr(0,2);
h2=stoi(p);
 string q=out.substr(3);
m2=stoi(q);
//cout<<"h1"<<h1<<endl;
//cout<<"M1"<<m1<<endl;
//
//cout<<"h2"<<h2<<endl;
//cout<<"M2"<<m2<<endl;


int tt1=(h1*60)+m1;
int tt2=(h2*60)+m2;
int ans=(tt1+tt2)/2;
//cout<<"Total min"<<ans<<endl;
int ansh=ans/60;
int ansm=ans%60;
//cout<<"ans h"<<ansh<<endl;
//cout<<"Ans min"<<ansm<<endl;
if(ansh<10&&ansm<10)
{
    cout<<"0"<<ansh<<":"<<"0"<<ansm<<endl;
}
else if(ansh<10)
{
    cout<<"0"<<ansh<<":"<<ansm<<endl;
}
else if(ansh>9&&ansm<10)
{
    cout<<ansh<<":"<<0<<ansm<<endl;
}
else{
    cout<<ansh<<":"<<ansm<<endl;
}



return 0;
}
