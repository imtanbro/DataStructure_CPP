#include<bits/stdc++.h>
using namespace std;


class Rect{
    private:
    int l,b;

    public:
    Rect(int l = 0, int b = 0);
    void getDim();
    int area();
    int peri();
    int getL();
    int getB();
    void setL(int l);
    void setB(int b);
};

Rect::Rect(int l, int b ){
    this -> l = l;
    this -> b = b;
}

void Rect :: getDim(){
    cout<<l<<" "<<b<<endl; 
}

int Rect :: area(){
    return l*b; 
}

int Rect :: peri(){
    return 2*(l + b); 
}

int Rect :: getL(){
    return l; 
}

int Rect :: getB(){
    return b; 
}

void Rect :: setL(int l){
    this -> l = l;
}

void Rect :: setB(int b){
    this -> b = b;
}

class Cuboid : public Rect{
    private:
    int h;

    public:
    Cuboid(int l = 0, int b = 0, int h = 0){
        setL(l);
        setB(b);
        this -> h = h;
    }

    int vol(){
        return getL() * getB() * h;
    }
};

int main(){
    Cuboid c(10,3,5);
    cout<<c.vol()<<endl;
    cout<<c.area()<<endl;

    return 0;
}