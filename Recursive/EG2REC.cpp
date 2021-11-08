#include<iostream>
using namespace std;

void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<n;
    }
}
int main(){
    int a=3;
    fun2(a);
    cout<<endl;
}