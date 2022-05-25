#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    for(int i = 0; i<5 ; i++){
        cout<<"a["<<i<<"] is: "<<a[i]<<" stored at address: "<<&a[i]<<endl;
    }

    int *p,*q;
    p = new int[5];
    q = p;
    for(int i = 0; i<5 ; i++){
        cin>>p[i];
    }

    for(int i = 0; i<5 ; i++){
        cout<<"p["<<i<<"] is: "<<p[i]<<" stored at address: "<<&p[i]<<" and value of q is "<<*(q+i)<<endl;
    }

    cout<<q<<' '<<(*q)<<" "<< &q <<endl;
    

    cout<<endl;

    return 0;
}