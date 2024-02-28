#include <stdio.h>
#include <iostream>
 
int main() {
 
    int vetor[5];
    int cont_pares = 0;
    
    for(int i = 0; i < 5; i++){
        
        std::cin >> vetor[i];
        
    }
    
      
    for(int i = 0; i < 5; i++){
        
        if(vetor[i]%2==0){
            cont_pares += 1;
        }
        
    }
    

    std::cout << cont_pares << " valores pares" << std::endl;    
 
    return 0;
}