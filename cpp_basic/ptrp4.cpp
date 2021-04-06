#include<iostream>
using namespace std;

int main(){

     int a = 10, *pa,&ra;
     
     pa = &a;
     cout<<pa<<endl;
     
     ra = a;
     cout<<ra<<endl;
     
     cout<<"a = "<<ra;
     
     return 0;
     
}
