#include<iostream>
using namespace std;

int main(){

     int a[] = {1,2,3,4,5};
     //        {5,1,2,3,4}
     //        {0,1,2,3,4}
     int *p = a;
     int temp,end = 4;
     temp = a[end];
     for(int i =4; i>=0 ;i--){
          if(i != 0)
               a[i] = a[i - 1];
          else
               a[i] = temp;
          // cout<<a[i]<<" ";   
     }

     for (auto x:a){
          cout<<x<<" ";
     }

     cout<<endl;
     
         
}
