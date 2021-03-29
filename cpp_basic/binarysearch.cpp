#include<iostream>
using namespace std;

int main(){
     
     int  a[7] = {1,4,6,9,15,26,37}, l = 0, h = 6, key, mid;
     cout<<"Enter Key: ";
     cin>>key;
     
     while(l <= h)
     {
          mid = (l + h)/2;
          if(key == a[mid]){
                    cout<<"Element found at: "<< mid<<endl;
                    return 0;
               }
          else if(key > a[mid])
                    l = mid + 1;
               else
                    h = mid - 1;
     }
     cout<<"Not Found"<<endl;              
}
