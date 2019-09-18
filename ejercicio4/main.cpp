#include <iostream>
using namespace std;

int main() {
    char x;
    int n;
    cout<<"ingresar las  coordenadas:\n";
    cin>>x>>n;
    if(x == 97 || x == 99 || x ==101 || x== 103){
        if(n%2 != 0){
            cout<<"black";
        }
        else
            cout<<"White";
    }
    else
        if(n % 2 == 0) {
            cout<<"black";
        }
        else
            cout<<"White";
    return 0;
}
