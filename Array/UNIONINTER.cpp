#include<iostream>
using namespace std;

int main(){
     
     /*
     int a1,a2;
     cout<<"Enter elements in arr 1: ";
     cin>>a1;
     
     cout<<"Enter elements in arr 2: ";
     cin>>a2;
     
     int a[a1],b[a2], c[(a1+a2)];
     */
     
     int a[] = {1,2,3,4,5}, b[] = {4,5,6,7,8};
     int c[10], d[5],l=0;
     
     for(int i = 0;i<10;i++){
          if (i < 5)
               c[i] = a[i];
          else
               c[i] = b[i % 5];
          
     }
    
     for(int i = 0; i<10;i++){
          for(int j = i + 1; j<10;j++){
               
               if(c[i] == c[j]){
                    d[l] = c[i];
                    l++;
                    
                    c[i] = NULL;
               }
          }
     }
     for(l;l<5;l++){
          d[l] = NULL;
     }
     cout<<"Intersection is: "<<endl;
     for(auto i:d){
          if(i != NULL)
               cout<<i<<" ";
     }
          
     cout<<endl<<"Union is: "<<endl;
     for(auto i:c){
          if(i != NULL)
               cout<<i<<" ";
     }
          
          
     cout<<endl;
}
