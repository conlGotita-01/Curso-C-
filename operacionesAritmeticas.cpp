
#include <iostream>

using namespace std ;

int main ( ){

    int numero_1 , numero_2 , suma = 0 , resta = 0 , multiplicacion = 0 , division = 0 , opc ;


    cout << " Bienvenido al menu de Operaciones Aritmeticas" << endl ;
    cout << " 1. Sumar dos numeros. " << endl ;
    cout << " 2. Restar dos numeros " << endl ;
    cout << " 3. Multiplicar dos numeros. " << endl ;
    cout << " 4. Dividir dos numeros. " << endl ;
    cout << " 5. Salir. " << endl ;
    cout << " Opcion: " ;
    cin >> opc ;

    switch(opc){
        
        
        case 1: 
        
                cout << " Ingrese el primer numero: " ;
                cin >> numero_1 ;

                cout << " Ingrese el segundo numero: " ;
                cin >> numero_2 ;
                
                suma = numero_1 + numero_2 ;
                cout << " El resultado de la suma es: " << suma << endl ; break ;
                
                
        case 2: 
        
                cout << " Ingrese el primer numero: " ;
                cin >> numero_1 ;

                cout << " Ingrese el segundo numero: " ;
                cin >> numero_2 ;
                
                resta = numero_1 - numero_2 ;
                cout << " El resultado de la resta es : " << resta << endl ; break ;
                
                
        case 3: 
        
                cout << " Ingrese el primer numero: " ;
                cin >> numero_1 ;

                cout << " Ingrese el segundo numero: " ;
                cin >> numero_2 ;
                
                multiplicacion = numero_1 * numero_2 ;
                cout << " El resultado de la multiplicacion es: " << multiplicacion << endl ; break ;
                
                
        case 4: 
        
                cout << " Ingrese el primer numero: " ;
                cin >> numero_1 ;

                cout << " Ingrese el segundo numero: " ;
                cin >> numero_2 ;
                
                division = numero_1 / numero_2 ;
                
                cout << " El resultado de la division es: " << division << endl ; break ;
                
        case 5: break;
    }
    return 0 ;
}