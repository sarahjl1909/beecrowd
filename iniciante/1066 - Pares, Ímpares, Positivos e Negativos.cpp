#include <stdio.h>
#include <iostream>
 
int main() {
 
    int vetor[5];
    int cont_pares = 0;
    int cont_impares = 0;
    int cont_positivos = 0;
    int cont_negativos = 0;
    
    for(int i = 0; i < 5; i++){
        
        std::cin >> vetor[i];
        
    }
    
      
    for(int i = 0; i < 5; i++){
        
        if(vetor[i]%2==0){
            cont_pares += 1;
        }
        
         if(vetor[i]%2==1){
            cont_impares += 1;
        }
        
         if(vetor[i] > 0){
            cont_positivos += 1;
        }
        
         if(vetor[i] < 0){
            cont_negativos += 1;
        }
    }
    

    std::cout << cont_pares << " valor(es) par(es)" << std::endl;
    std::cout << cont_impares << " valor(es) impar(es)" << std::endl;
    std::cout << cont_positivos << " valor(es) positivo(s)" << std::endl;
    std::cout << cont_negativos << " valor(es) negativo(s)" << std::endl;
 
    return 0;
}