#include <stdio.h>
#include <iostream>
#include <iomanip> 
 
int main() {
 
    double vetor[6];
    int valores_positivos = 0;
    double soma_positivos = 0;
    double media = 0;
    
    for(int i=0; i < 6; i++){
        
       std::cin >> vetor[i]; 
        
    }
    
    for(int i=0; i < 6; i++){
        
        if( vetor[i] >= 0){
            
            soma_positivos = soma_positivos + vetor[i];
            valores_positivos = valores_positivos + 1;
            
        }
        
    }
    
    media = (soma_positivos/valores_positivos); 
    
    std::cout << valores_positivos << " valores positivos" << std::endl;
     std::cout << std::setprecision(2)<< media << std::endl;
    
    

 
    return 0;
}