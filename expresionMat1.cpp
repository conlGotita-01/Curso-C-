
#include <iostream>


using namespace std;



int main ( ){
    
    float a, b, resultado = 0;
    
    cout << " Ingrese el valor para a: " ;
    cin >> a ;
    
    cout << " Ingrese el valor para b: " ;
    cin >> b ;
    
    resultado = ( a / b ) + 1 ;
    cout.precision(2); // Para redondear y que salgan dos decimales después de la coma. 
    
    
    return 0 ;
}