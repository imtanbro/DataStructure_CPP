//                  Reverse the array using Recursive function

#include <bits/stdc++.h>
using namespace std;

void reversearr(int arr[],int start,int end){

     if(start >= end)
     return;
     
     int temp;
     temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     
     reversearr(arr,start+1,end-1);
}

int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     reversearr(arr,0,n-1);
     
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
