#include<iostream>
using namespace std;

int main(){

     int a[5] = {1,-2,-9,69,6};
     int start = 0, end = 4 ,temp;
     
     
     while(start <= end){
          if (a[end] < 0)
               end--;
          else{
               if(a[start] < 0)
               {
                    temp = a[start];
                    a[start] = a[end];
                    a[end] = temp;
                    start++;
                    end--;
               }
               else{
                    start++;
               }
          }
     }
     
     for(auto x:a)
          cout<<x<<" ";
          
     cout<<endl;
     
}



