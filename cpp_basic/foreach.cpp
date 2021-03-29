#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i = 0; i<n; i++){
          cin>>a[i];
     }
     
     for(auto x:a){
          cout<<x<<" ";
     }
     cout<<endl;
     cout<<"Now using & to change value"<<endl;
     cout<<"New array is"<<endl;
     
     for(auto &x:a){
          cout<<++x<<" ";
     }
     cout<<endl;
     
          
}
