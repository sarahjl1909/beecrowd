#include <iostream>
 
using namespace std;
 
int main() {
 
    double num;
    double vetor[20];
    
    
    for(int i = 19; i >= 0; i--){
        cin >> num;
        vetor[i] = num;
        
    }
    
    
    for(int j = 0; j <= 19; j++){
        
        cout << "N["<<j<<"]"<<" = " << vetor[j]<<endl;

    }
       
        
    return 0;
}
