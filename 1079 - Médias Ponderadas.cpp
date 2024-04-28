#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int num;
    double nota1, nota2, nota3, media;

    
    cin >> num;
    
    for(int i = 0; i < num; i++){
            
            cin >> nota1;
            cin >> nota2;
            cin >> nota3;  
            
            media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;
            
            cout << fixed << setprecision(1) << media << endl;
        
        
    }
 
    return 0;
}