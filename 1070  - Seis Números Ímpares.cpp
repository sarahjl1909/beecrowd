#include <stdio.h>
#include <iostream>
 
int main() {
 
   int num;
   
   std::cin >> num;
   
   for(int i = num; i <num+12; i++){
       
       if(i%2==1){
           std::cout << i << std::endl;
       }
       
   }
   
   
    return 0;
}