#include <iostream>
using namespace std;

int main() {
  int total=0, pares=0, impares=0;
  int num= -1;
  
  while (num != 0 ){
    cout <<"ingresar los numeros: \n";
    cin>> num;
    if (num!=0)
      total++;
      if (num%2==0){
      pares++;
      }
      else{
      impares++;
      }
  }
  cout << "total de numero "<<total<<" los cuales "<<pares-1<<" son pares y "<<impares<<" son impares\n";
  
  return 0;
}

