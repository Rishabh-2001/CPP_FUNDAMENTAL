
/*
   *
   **
   ***
   ****
   *****
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

/*
           *
         * *
       * * *
     * * * *
   * * * * *
*/
/*
#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>n-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

/*
   *****
    ****
     ***
      **
       *
*/
/*
#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i&&j<=n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

*/
/*
    *****
    ****
    ***
    **
    *

*/
/*
#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=1&&j<=n+1-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
*/

/*
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
 */
/*
 #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int jl=2*n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=2*n-1;j++)
         {
            if(j>n-i&&j<n+i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
         }
         cout<<endl;
     }
 }
 */

 /*
         *
       *   *
     *   *   *
   *   *   *   *
 *   *   *   *   *

 */
 /*
 #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         int k=1;
         for(int j=1;j<=2*n-1;j++)
         {
             if(j>n-i&&j<n+i&&k)
             {
                 cout<<"*";
                 k=0;
             }
             else
             {
                 cout<<" ";
                 k=1;
             }
         }
         cout<<endl;
     }

 }
 */

 /*
    *********
    **** ****
    ***   ***
    **     **
    *       *

*/
/*
#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int jl=2*n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=2*n-1;j++)
         {
            if((j>=1&&j<=n-i+1)||(j>=n+i-1&&j<=2*n-1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
         }
         cout<<endl;
     }
 }
 */
 /*
     1
    121
   12321
  1234321

 */

 /*
 #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int jl=2*n;
     int k;
     for(int i=1;i<=n;i++)
     {
         k=1;
         for(int j=1;j<=2*n-1;j++)
         {

            if(j>n-i&&j<n+i)
            {
                cout<<k;
                if(k<i&&j<n)
                {
                k++;
                }
                else{
                    k--;
                }
            }
            else{
                cout<<" ";
            }
         }
         cout<<endl;
     }
 }
*/
/*
      ABCDCBA
      ABC CBA
      AB   BA
      A     A
*/
/*
#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int jl=2*n;
     char k;
     for(int i=1;i<=n;i++)
     {
         k='A';
         for(int j=1;j<=2*n-1;j++)
         {
            if((j>=1&&j<=n-i+1)||(j>=n+i-1&&j<=2*n-1))
            {
                cout<<k;
                if(j<n){

                k++;
                }
                else{

                    k--;
                }
            }
            else{
                cout<<" ";
                if(j==n){
                k--;
                }
            }
         }
         cout<<endl;
     }
 }
*/
/*
         *
        ***
       *****
      *******
       *****
        ***
         *
*/
/*
#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int k=0;
     int z=(n+1)/2;
     for(int i=1;i<=n;i++)
     {
         if(i<=z){
         k++;
         }
         else
         {
             k--;
         }
         for(int j=1;j<=n;j++)
         {
             if(j>=z+1-k&&j<=z-1+k)
             {
                 cout<<"*";
             }
             else
             {
                 cout<<" ";
             }
         }
         cout<<endl;
     }

 }
 */
 /*
     *
     **
     ***
     ****
     ***
     **
     *
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(i<=(n+1)/2)
        {
            k++;
        }
        else{
            k--;
        }
        for(int j=1;j<=(n+1)/2;j++)
        {
            if(j<=k)
            {
                cout<<"*";
            }

            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
*/
/*
   *******
    *****
     ***
      *
*/
/*
#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {

         for(int j=1;j<=2*n-1;j++)
         {
             if(j>=i&&j<=2*n-i)
             {
                 cout<<"*";

             }
             else
             {
                 cout<<" ";

             }
         }
         cout<<endl;
     }

 }
 */
 /*
        1
       232
      34543
     4567654

*/
/*
#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         int k=i;
         for(int j=1;j<=2*n-1;j++)
         {
             if(j>n-i&&j<n+i)
             {
                 cout<<k;
                 if(j<n)
                 {
                     k++;
                 }
                 else{
                    k--;
                 }
             }
             else
             {
                 cout<<" ";
             }
         }
         cout<<endl;
     }

 }
 */
 /*
    6543210
    543210
    43210
    3210
    210
    10
    0
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=n-i;
        for(int j=1;j<=n;j++)
        {
            if(j<=n+1-i)
            {
                cout<<k;
                k--;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/
/*
          1
         12
        123
       1234
      12345
       1234
        123
         12
          1
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    int d=0;
    for(int i=1;i<=2*n-1;i++)
    {
        d=1;
        if(i<(n+1))
        {
            k++;
        }
        else
        {
            k--;
        }
        for(int j=1;j<=n;j++)
        {
            if(j>=n+1-k)
            {
                cout<<d;
                d++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/
/*
   //   \*****/
   //   *\***/*
  //    **\*/**
   //   ***\***
    //  **/*\**
     // */***\*
     // /*****\

//  */
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char o=92;
    char c='/';
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            if(j==i)
            {
                cout<<o;

            }
            else if(j==n+1-i)
            {
                cout<<c;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
*/
/*
     *********
     **** ****
     ***   ***
     **     **
     *       *
     **     **
     ***   ***
     **** ****
     *********

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int m=(n+1)/2+1;
   int k=0;
    for(int i=1;i<=n;i++)
    {

        if(i<=m-1)
        {
            k++;
        }
        else{
            k--;
        }
        for(int j=1;j<=n;j++)
        {
            if(j<=m-k||j>=m-2+k)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/
/*
         A
        ABA
       ABCBA
      ABCDCBA
*/
/*
#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         char k='A';
         for(int j=1;j<=2*n-1;j++)
         {
             if(j>n-i&&j<n+i)
             {
                 cout<<k;
                 if(j<n)
                 {
                     k++;
                 }
                 else{
                    k--;
                 }
             }
             else
             {
                 cout<<" ";
             }
         }
         cout<<endl;
     }

 }

*/
/*
     A1
    AB12
   ABC123
  ABCD1234
*/
