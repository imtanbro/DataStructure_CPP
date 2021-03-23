#include<iostream>

int main(){
     int a,b,c;
     std::string name;
     std::cout<<"May I know your name?" <<std::endl;
     std::cin>>name;                                        //this will take only one word
     //std::getline(std::cin,name);                         // if you want set of words then use geline()
     std::cout<<"Enter two numbers: ";
     std::cin>>a>>b;
     c = a+b;
     std::cout<<name<<" Addition is:  "<<c<<std::endl;
}
