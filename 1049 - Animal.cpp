#include <stdio.h>
#include<iostream>
#include <string>

int main() {
    
    std::string palavra1, palavra2, palavra3;
    
    std::cin >> palavra1;
    std::cin >> palavra2;
    std::cin >> palavra3;
    
    if(palavra1 == "vertebrado"){
        if(palavra2 == "ave"){
            if(palavra3 == "carnivoro"){
                std::cout << "aguia" << std::endl;
            }else{
               std::cout << "pomba" <<std::endl; 
            }
        }else{
            if(palavra3 == "onivoro"){
                std::cout << "homem" << std::endl;
            }else{
               std::cout << "vaca" <<std::endl; 
            }
        }
        
    }else{
        if(palavra2 == "inseto"){
            if(palavra3 == "hematofago"){
                std::cout << "pulga" << std::endl;
            }else{
               std::cout << "lagarta" <<std::endl; 
            }
        }else{
            if(palavra3 == "hematofago"){
                std::cout << "sanguessuga" << std::endl;
            }else{
               std::cout << "minhoca" <<std::endl; 
            }
        }
    }
    
 
    return 0;
}