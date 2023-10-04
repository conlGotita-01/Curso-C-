
#include <iostream>


using namespace std;



int main ( ){
    
    float a , b , c , d , e , f , resultado = 0 ;
    
    cout << " Ingrese el valor para a: " ;
    cin >> a ;
    
    cout << " Ingrese el valor para b: " ;
    cin >> b ;
    
    cout << " Ingrese el valor para c: " ;
    cin >> c ;
    
    cout << " Ingrese el valor para d: " ;
    cin >> d ;

    cout << " Ingrese el valor para d: " ;
    cin >> e ;

    cout << " Ingrese el valor para d: " ;
    cin >> f ;


    resultado = ( a + ( b / c ) ) / ( d + ( e / f ) ) ;

    cout.precision(2) ; // Para redondear y que salgan dos decimales después de la coma. 
    
    cout << " El resultado es: " << resultado ;
    
    return 0 ;
}