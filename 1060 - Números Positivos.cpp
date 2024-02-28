#include <stdio.h>
#include <iostream>
 
int main() {
 
    double vetor[6];
    int valores_positivos = 0;
    
    for(int i=0; i < 6; i++){
        
       std::cin >> vetor[i]; 
        
    }
    
    for(int i=0; i < 6; i++){
        
        if( vetor[i] >= 0){
            
            valores_positivos = valores_positivos + 1;
        }
        
    
    }
    
    
    std::cout << valores_positivos << " valores positivos" << std::endl;
    
    

 
    return 0;
}