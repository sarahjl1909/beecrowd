#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dia, dia_final;
    int hora, hora_final;
    int minuto, minuto_final;
    int segundo, segundo_final;
    string semana;
    char sep;
    
    cin >> semana;
    cin >> dia;
    cin >> hora >> sep >> minuto >> sep >> segundo;
    cin >> semana;
    cin >> dia_final;
    cin >> hora_final >> sep >> minuto_final >> sep >> segundo_final;
    
    segundo = segundo_final - segundo;
    minuto = minuto_final - minuto;
    hora = hora_final - hora;
    dia = dia_final - dia;
    
    if (segundo < 0){
        
        segundo += 60;
        minuto--;
    }
    
    if(minuto < 0){
      minuto += 60;
      hora--;
    }
    
    if(hora < 0){
        hora += 24;
        dia--;
    }
    
    cout << dia << " dia(s)"<< endl;
    cout << hora << " hora(s)"<< endl;
    cout << minuto << " minuto(s)"<< endl;
    cout << segundo << " segundo(s)"<< endl;

    return 0;
}