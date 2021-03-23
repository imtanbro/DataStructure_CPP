//                  Reverse the Array


#include<iostream>


int main(){
     int number_of_elements_in_array;
     std::cin>>number_of_elements_in_array;
     
     int arr[number_of_elements_in_array],arr1[number_of_elements_in_array];
     
     for(int i = 0;i<number_of_elements_in_array;i++){
          std::cin>>arr[i];
     }
     
     for(int i = 0;i<number_of_elements_in_array;i++){
          arr1[i] = arr[number_of_elements_in_array - 1 - i];
     }
     std::cout<<"Array initially"<<std::endl;
     
     for(int i = 0;i<number_of_elements_in_array;i++){
          std::cout<<arr[i]<<" ";
     }
     std::cout<<"Array New"<<std::endl;
     for(int i = 0;i<number_of_elements_in_array;i++){
          std::cout<<arr1[i]<<" ";
     }
     std::cout<<std::endl;
}
