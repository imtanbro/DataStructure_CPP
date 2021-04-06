#include<iostream>
using namespace std;

int main(){
     
     const int i = 20;
     const int * const ptr = &i;
     
     (*ptr)++;
     int j = 15;
     ptr = &j;
     
     cout<<i<<endl;
     
     return 0;

}
