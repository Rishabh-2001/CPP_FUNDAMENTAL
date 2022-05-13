/*
    PRINT FIBBONACI TILL N
       1. You've to print first n fibonacci numbers.
        2. Take as input "n", the count of fibonacci numbers to print.
       3. Print first n fibonacci numbers.
  INPUT:
      N

  OUTPUT:
        0
        1
        1
        2
        3
        5
        8
        .. first n fibonaccis
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int a=0;
    int b=1;
    int c;
    for(int i=0;i<n;i++)
    {
         cout<<a<<endl;
         c=a+b;
         a=b;
         b=c;


    }

    //write your code here

}
