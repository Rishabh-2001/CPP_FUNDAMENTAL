#include<bits/stdc++.h>
using namespace std;
int cnt=0;
//void queenPermutation(bool board[],int n,int tq,int qpsf,string ans)
//{
//    if(qpsf==tq)
//    {
//        cnt++;
//        cout<<ans<<endl;
//        return;
//    }
//
//
//    for(int i=0;i<n;i++)
//    {
//        if(board[i]==false)
//        {
//            board[i]=true;
//            queenPermutation(board,n,tq,qpsf+1,ans+"q"+to_string(qpsf)+"b"+to_string(i)+" ");
//            board[i]=false;
//        }
////        ans=ans+"q"+to_string(qpsf)+"b"+to_string(i)+" ";
//
//    }
//}
void queenCombination(bool board[],int n,int tq,int qpsf,string ans,int lbu)
{
    if(qpsf==tq)
    {
        cnt++;
        cout<<ans<<endl;
        return;
    }


    for(int i=lbu+1;i<n;i++)
    {
            board[i]=true;
            queenCombination(board,n,tq,qpsf+1,ans+"q"+to_string(qpsf)+"b"+to_string(i)+" ",i);
            board[i]=false;
    }
}
int main()
{
bool board[4];
int tq=2;
queenCombination(board,4,tq,0,"",-1);
cout<<"Total ans:"<<cnt<<endl;
return 0;
}
