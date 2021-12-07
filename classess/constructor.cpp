#include <iostream>
using namespace std;

class Rect{
    private:
    int length, breadth;
    public:

    Rect(){
        length = 0;
        breadth = 0;
    }

    Rect(int l, int b){
        setData(l,b);
    }

    Rect(Rect &r){
        length = r.length;
        breadth = r.breadth;
    }

    void setData(int l, int b){
        if(l<0 || b < 0){
            cout<<endl<<"L or B cannot be less than 0, where l = "<<l<<" and b = "<<b<<endl;
            cout<<"Enter l and b: ";
            cin>>l>>b;
            length = l;
            breadth = b;
        }else{
            length = l;
            breadth = b;
        }
        cout<<endl;
    }
    void getData(){
        cout<<"Length is: "<<length<<endl;
        cout<<"Breadth is: "<<breadth<<endl;
    }
};

int main(){
    Rect r;
    r.setData(5,6);
    r.getData();
    r.setData(-1,4);
    r.getData();
    r.setData(4,-4);
    r.getData();
}