#include<iostream>
using namespace std;


int main(){
     
     int i = 1, j = 1;
     for(--i && ++j ; i<10; i+=2){
          cout<<"i is: "<<i<<"\t\tand j is: "<<j<<endl;
          cout<<"-"<<j<<endl;
     }
     cout<<";";
     
     i = 1; j = 1;
     cout<<(--i && ++j)<<endl;
     cout<<i<<" "<<j<<endl;
     
     return 0;0
}
