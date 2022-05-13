/*
CIRCULAR JAIL CELL
  There is a corcular jaol with 100 cells numbered 1-100. Each cell has an inmate and the door is locked.
  One night the jailor starts running around the jail in circles, In his first round he opens eaxh door.
  In his second round he visits every 2nd door (2,4,6,...) and shuts the door.
  In the 3rd round he vistits (3,6,9,...) and is the door is oened he shuts the dorr and vice versa.
   THis continues for 100 rounds. (i.e. 4,8,12,....;5,10,15....;49,98 etc) and exhausted the jailor falls down .
   How many prisoners fund their doors opend after 100 rounds.

*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    /* numbers with odd number of divisors are the ones which will stay pen. i.e. perfect squares.
    that means at every perfect square number until 100 the door will be opened.
     so we just need to print the perfect square numbers until the given limit.*/
     int n;
     cout<<"Number of rounds made by jailor:";
     cin>>n;
     cout<<"Doors which will remain open after "<<n<<" rounds is:"<<endl;
     for(int i=1;i<=sqrt(n);i++)
     {
         cout<<i*i<<" , ";
     }
     return 0;

}
