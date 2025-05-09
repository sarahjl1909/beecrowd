#include <iostream>
 
using namespace std;
 
int main() {
 
   int num, posicao, maior, i;
   
    maior = 0;
    posicao = 1;
        
   
    for( i = 1; i <= 100; i++){
        
        cin >> num;
        
        
        if(num > maior){
            maior = num;
            posicao = i;
            
        }
        

    }
    
    cout << maior << endl;
    cout << posicao << endl;
        
   
    return 0;
}