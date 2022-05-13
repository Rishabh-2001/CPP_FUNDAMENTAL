#include<bits/stdc++.h>
using namespace std;
void getMazePath(int a[100][100],int sx,int sy,int m,int n,string out,bool visited[100][100])
{
    if(sx==m-1&&sy==n-1)
    {
        cout<<out<<endl;
        return;
    }
    if(a[sx][sy]==1||sx>=m||sy>=n||sx<0||sy<0||visited[sx][sy]==true)
    {
        return ;
    }
    visited[sx][sy]=true;
    getMazePath(a,sx,sy+1,m,n,out+"R",visited);
//    out.pop_back();

    getMazePath(a,sx+1,sy,m,n,out+"D",visited);
//     out.pop_back();
    getMazePath(a,sx-1,sy,m,n,out+"T",visited);
//     out.pop_back();
    getMazePath(a,sx,sy-1,m,n,out+"L",visited);
//     out.pop_back();
    visited[sx][sy]=false;
    return;
}
int main()
{
int m,n;
cin>>m>>n;
int a[100][100]={{0,1,0,0},{0,0,0,0},{0,1,0,0},{0,1,1,0}};
cout<<"Maze is: "<<endl;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
bool visited[100][100];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        visited[i][j]=false;
    }
}


cout<<"Maze path are:"<<endl;
getMazePath(a,0,0,m,n,"",visited);

return 0;
}
