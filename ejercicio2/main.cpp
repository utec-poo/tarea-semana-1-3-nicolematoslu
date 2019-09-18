#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
  double Claro, Zona, Precio;

  cout<<"Escoja una zona. Ingrese 1.0 si es Super Vip, 2.0 si es Vip, 3.0 si es Preferencial y 4.0 si es General: \n";
  cin >> Zona;

  cout<<"si es cliente claro de ingresar 1.0, si no lo es debe  escribir 2.0: \n";
  cin >> Claro;

// ToDO

  if (Zona == 1.0){
    if (Claro == 1.0){
      Precio = 212.00*0.08;
      cout << "debe pagar: "<<Precio;
    }
    else{
      cout << "debe pagar: 212.00\n";
    }
  }
  else if (Zona == 2.0){
    if (Claro == 1.0){
      Precio = 170*0.08;
      cout <<"debe pagar: "<< precio;
    }
    else{
      cout <<"debe pagar: 170.00\n";
    } 
  }
  else if (Zona == 3.0){
    if (Claro == 1.0){
      Precio = 136*0.08;
      cout <<"debe pagar: "<< precio;
    }
    else{
      cout << "debe pagar: 136.00\n";
    } 
  }
  else if (Zona == 4.0){
    if (Claro == 1.0){
      Precio = 59*0.08;
      cout << "debe pagar: "<<Precio;
    }
   
  return 0;
}
