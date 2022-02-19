// #include<iostream>
// using namespace std;

// int expo(int a, int b){
//     if(b>1)
//         return expo(a,b-1)*a;
// }

// int main(){
    // int n,m;
    // cout<<"Enter base value: ";
    // cin>>n;
    // cout<<"Enter power value: ";
    // cin>>m;
    

    // int total = expo(n,m);

    // cout<<total<<endl;

    // return 0;
// }



#include<iostream>
using namespace std;


int expo(int a, int b){
    if(b>1)
        return expo(a,b-1)*a;
}

int main(){
    int n,m;
    cout<<"Enter base value: ";
    cin>>n;
    cout<<"Enter power value: ";
    cin>>m;
    

    int total = expo(n,m);

    cout<<total<<endl;

    return 0;
}