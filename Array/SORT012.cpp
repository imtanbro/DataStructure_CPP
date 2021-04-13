#include<iostream>
using namespace std;

void sort(int a[], int n){

     int mid = 0;
     int high = n-1;
     int low = 0;
     int temp;
     
     while(mid<=high){
          switch(a[mid]){
               
               case 0:
                    temp = a[low];
                    a[low] = a[mid];      
                    a[mid] = temp;
                    low++;
                    mid++;
                    break;
                
               case 1:
                    mid++;
                    break;
                
               case 2:
                    temp = a[high];
                    a[high] = a[mid];      
                    a[mid] = temp;
                    high--;
                    mid;
                    break;
                
               
          
          }
     }
          
}

int main(){

     int a[9] = {1,2,0,1,1,2,0,0,2},temp;
     
     //for(int i = 1; i<9; i++){
     //     cout<<a[i]<<" ";
          //if(a[i-1] > a[i])
          //{
            //   temp = a[i];
              // a[i] = a[i-1];
              // a[i-1] = temp;
          //}
     //}
     
     sort(a,9);
     
     for(int i = 1; i<9; i++){
          cout<<a[i]<<" ";
     }
     
     cout<<endl;
     
     return 0;
}
