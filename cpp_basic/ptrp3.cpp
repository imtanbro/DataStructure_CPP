#include<iostream>
using namespace std;

int main(){
     
     int a[] = {4,5,6,7};
     int * p = (a + 1);
     cout<< *p << endl;
     cout<< *a << endl;     
     cout<< *a + 10 <<endl;
     
     return 0;

}
