#include <stdio.h>
#include <iostream>
 
int main() {
    int numero;
    
    std::cin >> numero;
    
    if(numero == 61){
        
        std::cout<<"Brasilia"<<std::endl;
        
    }else if(numero == 71){
        
        std::cout<<"Salvador"<<std::endl;
        
    }else if(numero == 11){
        
        std::cout<< "Sao Paulo"<<std::endl;
        
    }else if(numero == 21){
        
        std::cout<<"Rio de Janeiro"<<std::endl;
        
    }else if(numero == 32){
        
        std::cout<<"Juiz de Fora"<<std::endl;
        
    }else if(numero == 19){
        
        std::cout<<"Campinas"<<std::endl;
        
    }else if(numero == 27){
        
        std::cout<<"Vitoria"<<std::endl;
        
    }else if(numero == 31){
        std::cout << "Belo Horizonte" <<std::endl;
    }else{
        std::cout << "DDD nao cadastrado" <<std::endl;
    }
 
 
    return 0;
}