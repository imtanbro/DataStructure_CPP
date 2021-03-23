#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter Number of elements in arrey ";
    cin>> n;
    cout<<endl;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl;
    for(int j = 0; j<n; j++){
        cout<<a[j];
    }
    cout<<endl;
    int b[5] = {1,2,3};
    for(int k = 0; k<5;k++){
        cout<<b[k];
    }
    cout<<endl;
    cout<<b[-1];
    cout<<endl;
}