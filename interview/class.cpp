#include <iostream>
using namespace std;

class Rect
{
public:
    int l, b;

public:
    int area()
    {
        return l * b;
    }
    int peri()
    {
        return 2 * (l + b);
    }
};

int main()
{

    //Stack
    Rect r1;
    r1.l = 10;
    r1.b = 20;

    cout << r1.peri() << endl;

    //Heap - 1
    Rect *r = new Rect();

    r -> l = 9;
    r -> b = 18;


    //Heap - 2
    Rect *ptr;
    ptr = &r1;

    ptr -> l = 50;
    ptr -> b = 100;

    cout << r1.peri() << endl;
    cout << r -> area() << endl;
    cout << ptr -> peri() << endl;

    return 0;
}