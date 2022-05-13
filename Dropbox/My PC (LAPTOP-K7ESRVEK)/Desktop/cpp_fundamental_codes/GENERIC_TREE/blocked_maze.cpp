#include<bits/stdc++.h>
using namespace std;

void blocked_maze(int maze[4][4],int r,int c,int tr,int tc,string ans,int vis[4][4])
{
    if(r==tr&&c==tc)
    {
        cout<<ans<<endl;
        return;
    }

    if(r>tr||c>tc||r<0||c<0||vis[r][c]==true||maze[r][c]==1)
    {
        return ;
    }
    vis[r][c]=true;
    blocked_maze(maze,r-1,c,tr,tc,ans+"T ",vis);
    blocked_maze(maze,r,c+1,tr,tc,ans+"R ",vis);
    blocked_maze(maze,r+1,c,tr,tc,ans+"B ",vis);
    blocked_maze(maze,r,c-1,tr,tc,ans+"L ",vis);
    vis[r][c]=false;
}
int main()
{
int maze[4][4]={{0,1,0,0},{0,0,0,0}, {0,1,0,0}, {0,0,1,0} };
bool vis[4][4]={false};
blocked_maze(maze,0,0,3,3,"",vis);

return 0;
}


/*     *
                 *            _
                             (_)
    *   *   \_/    \_/  *          *
            | |  * | |                 *
  *         | |____| |        *
     *     /    _    \              *
          /    (_)    \    *
    _    |             |    _           _
   | |   |      __     |   | |         | |
===|=|===|     |  |    |===| |=========|=|===
   | |   |_____|__|____|___| |_________| |____
              |____|
              |____|
              |____|
                              BORIYAT KO DUR KRTE HUE...

*/
