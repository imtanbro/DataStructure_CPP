#include<iostream>
using namespace std;

int main(){
     
     int a[] = {2,4,6,8,10};
     int *p = a;
     cout<<"  &p: "<<&p<<endl;
     cout<<"   p: "<<p<<endl;
     cout<<"  *p: "<<*p<<endl;
     p++;
     cout<<"&p++: "<<&p<<endl;
     cout<<" p++: "<<p<<endl;
     cout<<"*p++: "<<*p<<endl;
     
     cout<<"p[-2]: "<<p[3]<<endl;
     
     
}
