#include <iostream>
 
int main() {
 
   int x, y;
   int maior, menor, soma = 0;
   
   
   std::cin >> x;
   std::cin >> y;
   
    maior = x;
    menor = y;
   
   if(x < y){
       maior = y;
       menor = x;
   }
   
    
    for(int i = menor+1; i < maior; i++ ){ 
        
        if(i%2!=0){
            soma = soma + i;
        
        }
        
    }
    
    std::cout << soma << std::endl;

 
    return 0;
}