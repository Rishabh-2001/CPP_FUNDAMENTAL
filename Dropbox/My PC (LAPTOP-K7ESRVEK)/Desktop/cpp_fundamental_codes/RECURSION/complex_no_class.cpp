#include<iostream>
using namespace std;
class complex_number{
private:
    int real;
    int imaginary;
public:

   complex_number(int real,int imag){
      this->real=real;
      this->imaginary=imag;
   }
   void print(){
      if(this->imaginary<0)
      {
          cout<<this->real<<this->imaginary<<"i"<<endl;
      }
      else{
        cout<<this->real<<"+"<<this->imaginary<<"i"<<endl;
      }

   }
   void add(complex_number const &c)
   {
       int real1=this->real;
       int real2=c.real;
       int imag1=this->imaginary;
       int imag2=c.imaginary;
       this->real=real1+real2;
       this->imaginary=imag1+imag2;

   }
   void multiply(complex_number const &c)
   {
       int real1=this->real;
       int real2=c.real;
       int imag1=this->imaginary;
       int imag2=c.imaginary;
       int part1=(real1*real2);
       int part2=real1*imag2;
       int part3=imag1*real2;
       int part4=imag1*imag2;
       part4=part4*(-1);
       part2=part2+part3;
       this->real=part4+part1;
       this->imaginary=part2;


   }



};
int main()
{
    complex_number c1(2,3);
    complex_number c2(4,0);
    c1.print();
    c2.print();
   // c1.add(c2);

   c1.multiply(c2);
    c1.print();
   return 0;
}
