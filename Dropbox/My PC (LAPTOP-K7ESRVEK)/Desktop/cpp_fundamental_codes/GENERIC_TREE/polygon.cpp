#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,j,n,in) for (int i = j; i<n;i+=in)
#define loop(i,n) For(i,0,n,1)
const ll mod = 1e9 +7;


int main(){
  int t; cin>>t;
  ll ans = -1; bool okx = true ; int anti = 1e6,prop = 1e8 ; bool oky = true;
  while(t--){
    int x,y; cin>>x>>y;
    if ( okx and x==anti and y!=prop){
      anti =x;
      prop =y;
      okx = false ;
      oky = true;
      ans++;
    }
    else if ( oky and y == prop and x!=anti){
      anti = x; prop = y;
      oky = false;
      okx = true;
      ans++;
    }
    else if ( y!= prop and x!=anti) {
      anti =x; prop = y;
      okx = true; oky = true;
      ans++;

    }
    else{
          anti =x; prop = y;

    }
  }
  cout<<(ans+1);return 0;
}
