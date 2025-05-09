#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    int num, quantidade;
    string tipo;
    int qt_coelho = 0, qt_rato = 0, qt_sapo = 0, total;
    double percentual_c, percentual_r, percentual_s;
    
    cin >> num;
    
    for(int i = 0; i < num; i++){
        
        cin >> quantidade;
        cin >> tipo;
        
        if(tipo == "C"){
            
            qt_coelho = qt_coelho + quantidade;
            
        } else if(tipo == "R"){
            
            qt_rato = qt_rato + quantidade;
            
        } else{
            
            qt_sapo = qt_sapo + quantidade;
            
        }
        
    }
    
    total = qt_sapo + qt_rato + qt_coelho;
    
   percentual_c = (static_cast<double>(qt_coelho) / total) * 100;
   percentual_r = (static_cast<double>(qt_rato) / total) * 100;
   percentual_s = (static_cast<double>(qt_sapo) / total) * 100;

    
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << qt_coelho << endl;
    cout << "Total de ratos: " << qt_rato << endl;
    cout << "Total de sapos: " << qt_sapo << endl;
    
    cout <<fixed << setprecision(2)<< "Percentual de coelhos: " << percentual_c << " %"<<endl;
    cout <<fixed << setprecision(2)<< "Percentual de ratos: " << percentual_r << " %"<<endl;
    cout <<fixed << setprecision(2)<< "Percentual de sapos: " << percentual_s << " %"<<endl;
    
    return 0;
}