

#include <iostream> 


using namespace std;


int main ( ){
    
    int x , y , auxiliar ;
    
    cout << " Ingrese el valor de x: " ;
    cin >> x ;
    
    cout << " Ingrese el valor de y: " ;
    cin >> y ;
    
    auxiliar = x ;
    x = y ;
    y = auxiliar ;
    
    cout << x ;
    cout << y ;
    
    
    
    return 0 ;
}