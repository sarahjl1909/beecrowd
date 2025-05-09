#include <iostream>
#include <iomanip>

int main()
{
    double renda;
    double imposto_a_pagar = 0;
    
    std::cin >> renda;
    
    if(renda < 2000.01){
        
        std::cout << "Isento" << std::endl;
        
    } else if(renda >= 2000.01 && renda < 3000.01){
        
        imposto_a_pagar = (renda - 2000) * 0.08;
        
        std::cout << "R$ " << std::fixed << std::setprecision(2) << imposto_a_pagar << std::endl;
        
    } else if(renda >= 3000.01 && renda < 4500.00){
        
        imposto_a_pagar = ((renda - 3000) * 0.18) + (1000 * 0.08);
        
        std::cout << "R$ " << std::fixed << std::setprecision(2) << imposto_a_pagar << std::endl;
        
    } else {
        
        imposto_a_pagar = ((renda - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
        
        std::cout << "R$ " << std::fixed << std::setprecision(2) << imposto_a_pagar << std::endl;
        
    }

    return 0;
}
