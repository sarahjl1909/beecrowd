#include <iostream>
 
using namespace std;
 
int main() {
 
   int num, tam;
   
   cin >> tam;
   
   for(int i = 0; i < tam; i ++){
       
        cin >> num;
       
       if(num == 0){
           
           cout << "NULL" << endl;
           
       }else{
           
           if(num%2==0){
           
                cout << "EVEN ";
           
            }else{
           
                cout << "ODD ";
            }
            
            if(num > 0){
                
                cout << "POSITIVE" << endl;
                
            } else{
                
                cout << "NEGATIVE" << endl;
                
            }
           
       }
       
       
       
   }
   
   
   
 
    return 0;
}