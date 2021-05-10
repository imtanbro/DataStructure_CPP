#include<iostream>
using namespace std;

int main(){
     int max, sum = 0, n;
     cin>>n;
     int a[n];                      
     
     for(int i = 0; i<n;i++)         
          cin>>a[i];
 
     for(int i = 0; i<n; i++){                    //   0
          if(i == 0){                             //   Yes
               sum = a[0];                        //   1        
               max = a[0];                        //   1
          }else{               
               sum = sum + a[i];                  //
               if(sum < a[i]){                    //
                    if(max < a[i]){               //
                         max = a[i];              //
                         sum = max;               //
                    }
               }else{                             //
                    if(sum > max){                //
                         max = sum;               //
                    }
               }    
          }
     }
     cout << "Max Sum is: "<<max<<endl;
}





























// #include<iostream>
// using namespace std;

// int main(){
//      int max, sum = 0, n;
//      cin>>n;
//      int a[n];                      
     
//      for(int i = 0; i<n;i++)         
//           cin>>a[i];
          
//      for(int i = 0; i<n; i++){                    
//           if(i == 0){
//                sum = a[i];                              
//                max = a[i];                             
//           }else{
//                sum = sum + a[i];                  
//                if(sum < max){                   
//                     max = a[i];                               
//                     sum = max;                   
//                }else{
//                     if(sum > max){                
//                          max = sum;               
//                     }
//                }
//           }
//      }
//      cout << "Max Sum is: "<<max<<endl;
// }
