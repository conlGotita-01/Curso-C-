


#include <iostream>


using namespace std;



int main ( ){
    
    
    float nota1 , nota2 , nota3 , resultado ;
    
    cout << " Ingrese la nota numero 1: " ;
    cin >> nota1 ;
    
    cout << " Ingrese la nota numero 2: " ;
    cin >> nota2 ;
    
    cout << " Ingrese la nota numero 3: " ;
    cin >> nota3 ;
    
    
    resultado = ( nota1 + nota2 + nota3 ) / 3 ;
    cout.precision(2) ;
    
    cout << " El promedio de las notas es: " << resultado << endl ;
    
    
    return 0 ;
}