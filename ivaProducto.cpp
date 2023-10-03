
#include <iostream>


using namespace std;


int main ( ){
    
    float producto = 0 , producto_iva = 0 , resultado = 0 ;
    
    cout << " Ingrese el valor del producto al cual le quiere sacar el IVA: " ;
    cin >> producto ;
    
    resultado = ( producto * 19 ) / 100 ;
    producto_iva = resultado + producto ;
    
    
    cout << " El IVA del producto es: " << resultado << endl ;
    cout << " El producto con el IVA agregado es: " << producto_iva ;
    
    
    return 0 ;
}