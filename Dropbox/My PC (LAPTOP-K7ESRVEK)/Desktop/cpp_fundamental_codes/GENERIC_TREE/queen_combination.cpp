#include<bits/stdc++.h>
using namespace std;


bool canPlace(bool box[4][4],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        if(box[row][i]==true)
        {
            return false;
        }
    }
     for(int i=0;i<row;i++)
    {
        if(box[i][col]==true)
        {
            return false;
        }
    }

    for(int i=row-1,j=col-1;i>=0,j>=0;i--,j--)
    {
        if(box[i][j]==true)
        {
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0,j<4;i--,j++)
    {
        if(box[i][j]==true)
        {
            return false;
        }
    }
    return true;
}
void queenCombination_2dkill(bool box[4][4],int row,int pos,int n,int tr,int noq,int qpsf,string ans)
{
    if(qpsf==noq)
    {
        cout<<ans<<endl;
        return ;
    }

    if(pos>=n)
    {
        row=row+1;
        pos=0;
    }
        if(row==n)
        {
            return ;
        }

        //PLACE QUEEN
        if(canPlace(box,row,pos))
        {
        box[row][pos]=true;
        //only for n queen
        queenCombination_2dkill(box,row+1,0,n,tr,noq,qpsf+1,ans+"B"+"["+to_string(row)+"]"+"["+to_string(pos)+"]"+" ");
        box[row][pos]=false;
        }

        //NOT PLACE

        queenCombination_2dkill(box,row,pos+1,n,tr,noq,qpsf,ans);

}


//void queenCombination_box2d(bool box[10][10],int row,int pos,int n,int tr,int noq,int qpsf,string ans)
//{
//    if(qpsf==noq)
//    {
//        cout<<ans<<endl;
//        return ;
//    }
//
//    if(pos>=n)
//    {
//        row=row+1;
//        pos=0;
//    }
//        if(row==tr)
//        {
//            return ;
//        }
//
//        //PLACE QUEEN
//        box[row][pos]=true;
//        queenCombination_box2d(box,row,pos+1,n,tr,noq,qpsf+1,ans+"B"+"["+to_string(row)+"]"+"["+to_string(pos)+"]"+" ");
//        box[row][pos]=false;
//
//        //NOT PLACE
//
//        queenCombination_box2d(box,row,pos+1,n,tr,noq,qpsf,ans);
//
//}
//void queenCombination_box(bool box[],int pos,int n,int noq,int qpsf,string ans)
//{
//    if(qpsf==noq)
//    {
//        cout<<ans<<endl;
//        return ;
//    }
//    if(pos>=n)
//    {
//        return ;
//    }
//
//        //PLACE QUEEN
//        box[pos]=true;
//        queenCombination_box(box,pos+1,n,noq,qpsf+1,ans+"B"+to_string(pos)+" ");
//        box[pos]=false;
//
//        //NOT PLACE
//
//        queenCombination_box(box,pos+1,n,noq,qpsf,ans);
//
//}
int main()
{
bool box[4][4]={false};
cout<<"Total combinations aoaf :"<<endl;
queenCombination_2dkill(box,0,0,4,4,4,0,"");


return 0;
}
