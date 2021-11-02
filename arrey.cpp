// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "Enter Number of elements in arrey ";
//     cin>> n;
//     cout<<endl;
//     int a[n];
//     for(int i = 0; i<n; i++){
//         cin>>a[i];
//     }
//     cout<<endl;
//     for(int j = 0; j<n; j++){
//         cout<<a[j];
//     }
//     cout<<endl;
//     int b[5] = {1,2,3};
//     for(int k = 0; k<5;k++){
//         cout<<b[k];
//     }
//     cout<<endl;
//     cout<<b[-1];
//     cout<<endl;
// }


#include<bits/stdc++.h>
using namespace std;

int minMoves(int arr[], int n){

    int moves = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int minlev=sum/n;
    if(sum%n != 0)
        return -1;
    else{
        int ma=arr[0];
        int mi = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>ma){
                ma = arr[i];
            }
            if(arr[i]<mi) 
                mi = arr[i];
                
        }
        return max((ma-minlev), (minlev-mi));
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<minMoves(arr, n);
}