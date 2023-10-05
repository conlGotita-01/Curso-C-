
#include <iostream>
#include <math.h>


using namespace std;



int main ( ){
    
    float cateto_opuesto , cateto_adyacente , hipotenusa;
    
    
    cout << " Ingrese el cateto opuesto: " ;
    cin >> cateto_opuesto ;
    
    cout << " Ingrese el cateto adyacente: " ;
    cin >> cateto_adyacente ; 
    
    
    hipotenusa = sqrt ( pow( cateto_opuesto,2 ) + pow (cateto_adyacente,2 ) ) ;
    cout.precision(2) ;
    
    cout << " \n La hipotenusa del triangulo es: " << hipotenusa << endl ;
    

    return 0 ;
}

