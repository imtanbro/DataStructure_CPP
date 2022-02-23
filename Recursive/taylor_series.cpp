#include<iostream>
using namespace std;

double e(int x, int n){

    static int p = 1, f = 1;    //Used Static varible: Power and fact cannot be returned 
    int r;                      //by a function since it can return only 1 value not 3
                                //So when we want to involve multiple values in recc, we use static
    if(n == 0)
        return 1;

    r = e(x , n-1);
    p = p * x;
    f = f * n;
    return r+p/f;
}

int main(){
    printf("%lf \n", e(4,15));
}