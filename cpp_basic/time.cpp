#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;
int main()
{
  
    int a[1000000];
    int sum1 = 0, sum2 = 0,sum3 = 0;
     
    for(int i = 0; i!= 1000000; i++){
          a[i] = (i+1);
    } 





  
    // Get starting timepoint
    auto start = high_resolution_clock::now();
  
    
     
    for(int i = 0; i!= 1000000; i++){
          sum1 += a[i];
    }

    // Get ending timepoint
    auto stop = high_resolution_clock::now();
    cout<<"Sum after normal for loop is: "<<sum1<<endl;      
    auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
         
         
         
         
         
         
         
         
         
    // Get starting timepoint for for each loop
    auto start1 = high_resolution_clock::now();
     
    for(auto j:a){
          sum2 += j;
    }

    // Get ending timepoint
    auto stop1 = high_resolution_clock::now();
    cout<<"Sum after for each loop is: "<<sum2<<endl;  
    
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
  
    cout << "Time taken by function: "
         << duration1.count() << " microseconds" << endl;
  
  
  
  
  
  
  
  // Get starting timepoint for while loop
    auto start2 = high_resolution_clock::now();
     
     int j = 0;
    while(j!=1000000){
     sum3 += a[j];
     j++;
    }

    // Get ending timepoint
    auto stop2 = high_resolution_clock::now();
    cout<<"Sum after while loop is: "<<sum3<<endl;  
    auto duration2 = duration_cast<microseconds>(stop1 - start1);
  
    cout << "Time taken by function: "
         << duration2.count() << " microseconds" << endl;
  
    return 0;
}
