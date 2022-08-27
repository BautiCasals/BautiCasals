#include <iostream>

using namespace std;

bool esPrimo(int n) {
    int divisores = 0;
    for (int i=2;i<n;i=i+1) {
        if( n % i == 0) {
            divisores = divisores + 1;
        } else {
            //do nothing
        }
    }
    if (divisores == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "Ingrese un numero entero: " << endl;
    int a = 0;
    cin >> a;
    bool soyPrimo = esPrimo(a);
    cout << "El numero " << a;
    if (soyPrimo) {
        cout << " SI es Primo" << endl;
    } else {
        cout << " NO es Primo" << endl;
    }
    return 0;
}
