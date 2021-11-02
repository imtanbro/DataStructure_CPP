#include<iostream>
using namespace std;

struct Rectangle
{
    int l,b;
};

int main(){

    struct Rectangle *p = new struct Rectangle;
    p -> l = 10;
    p -> b = 6;

    cout<<"Area is: "<< (p->l * p->b)<<endl;

    int a = 0;

    if(0){
        cout<<"inside if "<<a<<endl;
    }else   
        cout<<"Its in else"<<endl;


// Area of rectangle with side {length} x {bredth} = {answer}
    cout<<"Area of rectangle with side "<<p->l<<" x "<<p->b<<" = "<< (p->l * p->b)<<endl;
    printf("Area of rectangle with side %d x %d = %d", p->l,p->b,(p->l * p->b));

    // int a[5] = {1};
    // for(int i = 0; i < 5; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";


}