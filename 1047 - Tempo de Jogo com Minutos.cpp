#include <iostream>

int main() {
 
    int hora_ini, minuto_ini, total_ini, total, hora, minuto;
    int hora_fim, minuto_fim, total_fim;
    
    std::cin >> hora_ini;
    std::cin >> minuto_ini;
    std::cin >> hora_fim;
    std::cin >> minuto_fim;
    
    total_ini = (hora_ini * 60) + minuto_ini;
    total_fim = (hora_fim * 60) + minuto_fim;
    
    if(total_ini < total_fim){
        
        
        total = total_fim - total_ini;
        
        hora = total/60;
        minuto = total%60;
        
        
    } else if(total_ini > total_fim){
        
       total = ((24 * 60) - total_ini) + (total_fim);
        
        hora = total/60;
        minuto = total%60;
        
    } else{
        
        hora = 24;
        minuto = 0;
        
    }
    
    std::cout << "O JOGO DUROU "<< hora << " HORA(S) E "<<minuto<<" MINUTO(S)" << std::endl;
    
    
 
    return 0;
}