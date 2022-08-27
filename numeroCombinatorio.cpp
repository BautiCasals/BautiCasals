#include <iostream>

int factorial(int n) {
    int i = 1;
    int prod = 1;
    while(i <= n) {
        prod = prod*i;
        i = i+1;
    }
    return prod;
}


int numeroCombinatorio(int n,int k) {

//Calculo el numero combinatorio usando
//los factoriales
    return (factorial(n))/((factorial(n-k))*(factorial(k)));
}

int main() {

//Ingreso de datos
    std::cout << "Ingrese un numero para n: " << std::endl;
    int n = 0;
    std::cin >> n;
    std::cout << "Ingrese un numero para k: " << std::endl;
    int k = 0;
    std::cin >> k;

//salida de resultados
    std::cout << "El numero combinatorio entre los valores ingresados es: " << std::endl; ;
    if(n==k or k==0) {
        std::cout << "es 1" << std::endl;
    } else {
        std::cout << "es " << numeroCombinatorio(n,k) << std::endl;
    }
    return 0;

}
