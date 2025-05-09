#include <stdio.h>
#include <iostream>
 
int main() {
    int n;
    int cont_in = 0;
    int cont_out = 0;
   
    std::cin >> n;
    
    int vetor[n];
    
    for(int i = 0; i<n;i++){
        
        std::cin >> vetor[i];
        
    }
    
    for(int i = 0; i<n;i++){
        
        if(vetor[i] >= 10 and vetor[i]<=20){
            
            cont_in = cont_in + 1;
            
        } else{
            
            cont_out = cont_out + 1;
        }
        
    }
    
    std::cout << cont_in << " in" << std::endl;
    std::cout << cont_out <<" out" <<std::endl;
 
    
 
    return 0;
}