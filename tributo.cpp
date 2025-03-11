#include <iostream>
#include <cmath>   
int S;
int main(){
std::cout << "Ingrese el total de sus ingresos : ";
std::cin >>S;
    // Ciclo para asegurar que la entrada sea un número válido, numero positivo 
while (S<0) {
            // Si el número no es válido se muestra un error 
        std::cout << "Error: entrada no válida. Intenta nuevamente con un valor positivo.";
        std::cout << "Ingrese el total de sus ingresos : ";
        std::cin >>S;
        
    }
 if (S<=10000){
     std::cout<< "El valor a pagar es : 0 monedas de oro";
 }
else {
    if(10001>= S || S<50000) { 
        S= S - 10000 ;
        S=round(S/10);
        std::cout<< "El valor a pagar es : "<<S<<" monedas de oro";
        } 
    if(S>=50000) {
        if (S<90000){
            S=round(S/10);
            std::cout<< "El valor a pagar es : "<<S<<" monedas de oro";
        }else {
            S=round((S*2)/10);
            std::cout<< "El valor a pagar es : "<<S<<" monedas de oro";
        }
    }
        
}
    return 0;
}
