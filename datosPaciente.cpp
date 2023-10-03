#include <iostream>



using namespace std;


int main ( ){
    
    int edad ;
    char nombre[10] , sexo[10] ;
    float altura ;
    
    cout << " Ingrese el nombre del paciente: ";
    cin >> nombre;
    
    cout << " Ingrese la edad del paciente: " ;
    cin >> edad;
    
    cout << " Ingrese el sexo del paciente: " ;
    cin >> sexo;
    
    cout << " Ingrese la altura del paciente: " ;
    cin >> altura;
    
    
    
    cout << " El nombre del paciente es " << nombre << " tiene  " << edad << " de edad," << " es de sexualidad " << sexo << " tiene una altura de " << altura ;
    
    
    
    return 0 ;
}