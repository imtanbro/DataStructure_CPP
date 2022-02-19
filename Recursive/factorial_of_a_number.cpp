#include<iostream>
using namespace std;


int fact(int n){
    if(n == 0)
        return 1;
    return fact(n-1)*n;
}


int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    int total = fact(n);

    cout<<total<<endl;

    return 0;
}