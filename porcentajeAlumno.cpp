

#include <iostream>


using namespace std ;


int main ( ){
    
    float nota_practica = 0 , nota_teorica = 0 , nota_participacion = 0 ;
    float auxiliar_p , auxiliar_t , auxiliar_pt , total ;
    
    cout << " Ingrese la nota practica: " ;
    cin >> nota_practica ;
    
    auxiliar_p = ( ( nota_practica * 30) / 100 ) ;
    
    cout << " Ingrese nota teorica: " ;
    cin >> nota_teorica ;
    
    auxiliar_t = ( ( nota_teorica * 60 ) / 100 )  ;
    
    cout << " Ingrese la nota de participacion: " ;
    cin >> nota_participacion ;
    
    
    auxiliar_pt = ( ( nota_participacion * 10 ) / 100 ) ;
    
    total =  auxiliar_p + auxiliar_t + auxiliar_pt ;
    
    cout << "La nota final es de: " << total ;
    
    return 0 ;
}