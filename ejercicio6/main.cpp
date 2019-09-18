#include <iostream>
#include "Tipos.h"
using namespace std;
int main() {
int numero,residuo;
do{
cout << "ingresar un numero:";
cin >> numero;
} while ((numero<100) or (numero>1000)); 
for (int i=0; residuo!= 0; i++)
 {
  residuo= numero/1;
   if (residuo%2==0)
   {cout<< " ultima cifra es par \n";}
   else 
    {cout<< " ultima cifra es impar \n";}
  residuo= numero/10;
  if (residuo%2==0)
   {cout<< "segunda cifra es par \n";}
   else 
    {cout<< "segunda cifra es impar \n";}
  residuo= numero/100;
  if (residuo%2==0)
   {cout<< " primera cifra es par \n";}
   else 
    {cout<< "primera cifra es impar \n";}
  residuo = numero/1000;  
 }
} 
