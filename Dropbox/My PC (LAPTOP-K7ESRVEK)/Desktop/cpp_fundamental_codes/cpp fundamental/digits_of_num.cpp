/*
  DIGITS OF A NUMBER
    1. You've to display the digits of a number.
    2. Take as input "n", the number for which digits have to be displayed.
    3. Print the digits of the number line-wise.

    INPUT:
       65784383

    OUTPUT:
        6
        5
        7
        8
        4
        3
        8
        3

*/

#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int newnum=n;
    int c=0;
    while(n!=0)
    {
           n=n/10;
           c++;
    }

    while(c!=0)
    {
         int a=pow(10,c-1);
        int r=newnum/a;
          cout<<r<<endl;
        newnum=newnum%a;
        c--;
    }


    //write your code here

}
