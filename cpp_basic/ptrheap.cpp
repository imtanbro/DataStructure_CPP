#include<iostream>
using namespace std;

int main(){
     
     int *p = new int[5];
     p[0] = 10;
     p[2] = 16;
     for(int i = 0; i < 5; i++)
          cout<<p[i]<<" ";
     
     delete []p;
     //p = NULL;
     p = nullptr; 
     
     return 0;
}
