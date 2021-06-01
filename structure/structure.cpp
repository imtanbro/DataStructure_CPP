#include<iostream>
using namespace std;

struct Rectangle
{
    int length,breadth;
    char x;
};

int main(){
    struct Rectangle r;
    r.length = 15;
    r.breadth = 20;

    cout<<"Area is: "<<r.breadth * r.length<<endl;
    cout<<"Size of structure is: "<<sizeof(r)<<endl;

}