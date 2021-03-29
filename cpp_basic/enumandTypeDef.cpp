#include<iostream>
using namespace std;

enum day {mon,tue,wed,thus = 1,fri,sat,sun};
typedef int marks;
typedef int rollno;

// const int mon = 0;

int main(){
     day d;
     d = mon;
     marks m1 = 20,m2 = 5;
//     mon++        this cant be done cos {mon,tue,wed,thus,fri,sat,sun} these are constant of type day
     cout<<mon<<endl;
     cout<<tue<<endl;
     cout<<wed<<endl;
     cout<<thus<<endl;
     cout<<fri<<endl;
     cout<<sat<<endl;
     cout<<sun<<endl;
     
          cout<<m1<<m2<<endl;
}
