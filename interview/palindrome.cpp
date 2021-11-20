#include<iostream>
using namespace std;

string reverseString(string s){
    char a;                                                                                            //     12 
    for (int i = 0; i < (s.length()) / 2; i++)                                                         //  10|121
    {                                                                                                  //     120  
        a = s[i];                                                                                                      
        s[i] = s[(s.length() - i - 1)];                                                                //       1
        s[(s.length() - i - 1)] = a;
    }
    return s;
}

bool reverseNo(int num){
    if(num < 0) return  false; 
   int reversed = 0, remainder, original = num;
   while(num != 0) {
        remainder = num % 10; // reversed integer is stored in variable
        reversed = reversed * 10 + remainder; //multiply reversed by 10 then add the remainder so it gets stored at next decimal place.
        num  /= 10;  //the last digit is removed from num after division by 10.
    }
    // palindrome if original and reversed are equal
    return original == reversed;
}

int main(){
    //121 -> 121
    int a = 121;
    string b = "Tanmay", c;
    c = reverseString(b);
    if(b == c){
        cout<<"Palindrome"<<endl;
    }else
        cout<<"Not Palindrome"<<endl;

    if(reverseNo(a)){
        cout<<"Palindrome"<<endl;
    }else
        cout<<"Not Palindrome"<<endl;
}