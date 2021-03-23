#include<iostream>
using namespace std;

int main(){
     int a = 1,b = 1,c = 1,d = 1,x = 0;
     cout<<"Initial value of a is: "<<a<<endl;
     x = a++;
     cout<<"After performing a++ value of x is: "<<x<<" and value of a is: "<< a <<endl<<endl;
     x = 0;
     cout<<"Initial value of b is: "<<b<<endl;
     x = ++b;
     cout<<"After performing ++b value of x is: "<<x<<" and value of b is: "<< b <<endl<<endl;
     x = 0;     
     cout<<"Initial value of c is: "<<c<<endl;
     x = c--;
     cout<<"After performing c-- value of x is: "<<x<<" and value of c is: "<< c <<endl<<endl;
     x = 0;     
     cout<<"Initial value of d is: "<<d<<endl;
     x = --d;
     cout<<"After performing --d value of x is: "<<x<<" and value of d is: "<< d <<endl<<endl;     
}
