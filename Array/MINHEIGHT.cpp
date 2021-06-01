#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int min = arr[0],max = arr[0],k = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
            // if((min + k) > 0){
            //     min += k;
            // }
        }
    }
    cin>>n;

    if(max - k > 0)
        max -= k;
    else 
        max += k;

    min += k;
    cout<<n;

    cout<<min<<endl;
    cout<<max<<endl;
    cout<<max - min<<endl;

}