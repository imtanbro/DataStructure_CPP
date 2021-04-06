#include<iostream>
using namespace std;

int main(){
     
     int a = 32, *ptr = &a;
     char ch = 'A', &cho = ch;
     
     cout<<"a: "<<a<<endl;
     cout<<"ptr: "<<ptr<<endl;
     cout<<"*ptr: "<<*ptr<<endl;

     cout<<"ch: "<<ch<<endl;
     cout<<"cho: "<<cho<<endl;
     cout<<"&cho: "<<&cho<<endl;

     cho += a;
     cout<<"cho new: "<<cho<<endl;

     *ptr += ch;
     cout<<a<<" , "<< ch <<endl;
     
     return 0;

}
