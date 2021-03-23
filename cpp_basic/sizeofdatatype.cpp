#include <bits/stdc++.h> 
using namespace std;
#define SIZE(x) sizeof(x)*8

void size(int size){
    int x = pow(2,size * 8);
    int y = pow(2,size * 8) - 1;
    cout<<"Range is: "<< y * (-1) <<" to "<<x<<endl<<endl;
}

int main(){
     char a;
     int b;
     float c;
     double d;
     bool e;
     long f;
     long double g;
     cout<<"Size of Char is: "<<sizeof(a)<<endl;
     size(SIZE(a));
     cout<<"Size of Int is: "<<sizeof(b)<<endl;
     size(SIZE(b));
     cout<<"Size of Float is: "<<sizeof(c)<<endl;
     size(SIZE(c));
     cout<<"Size of Double is: "<<sizeof(d)<<endl;
     size(SIZE(d));
     cout<<"Size of Booleam is: "<<sizeof(e)<<endl;
     size(SIZE(e));
     cout<<"Size of Long is: "<<sizeof(f)<<endl;
     size(SIZE(f));
     cout<<"Size of Long Double is: "<<sizeof(g)<<endl;
     size(SIZE(g));
     return 0;
}
