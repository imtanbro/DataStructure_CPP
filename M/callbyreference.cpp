#include<iostream>
using namespace std;

int add(int &a, int &b)
{
     int c;
     c = a + b;
     return c;

}

int main()
{
     int n1 = 10,n2 = 20,sum, a;
    //  a = n1;

     sum = add(n1,n2);
     cout<<"Sum :"<<sum<<endl;
     
     return 0;
}
