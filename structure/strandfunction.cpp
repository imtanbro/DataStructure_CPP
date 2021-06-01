#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r -> length = l;
    r -> breadth = b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

void changeLength(struct Rectangle *r, int l){
    r -> length = l;
}

void changeBreadth(struct Rectangle *r, int b){
    r -> breadth = b;
}


int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    cout<<area(r)<<endl;
    changeLength(&r,5);
    cout<<"New area after changing length is: "<<area(r)<<endl;
    changeBreadth(&r,20);
    cout<<"New area after changing breadth is: "<<area(r)<<endl;    

}