#include <stdio.h>
#include <iostream>

 
int main() {
 
   int num;
   
   std::cin >> num;
   
   for(int i = 1; i <= num; i++){
       
       if(i%2==0){
           
           std::cout << i << "^" << "2" << " = " << i * i << std::endl;
           
       }
       
   }
 
    return 0;
}