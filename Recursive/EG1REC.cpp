#include<iostream>
using namespace std;

void func(int n){
    if(n>0){
        cout<<n<<endl;
        func(n-1);
    }
    
}


int main(){
    int a = 3;
    func(3);
}