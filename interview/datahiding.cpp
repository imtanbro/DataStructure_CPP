#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle *r = new Rectangle();
    r -> setLength(5);
    r -> setBreadth(15);

    cout<<"Area is: "<<r->area()<<" where length = "<<r -> getLength() << " and breadth = "<< r -> getBreadth()<<endl;
    return 0;
}
