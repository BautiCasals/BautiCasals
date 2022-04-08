//C++
#include <iostream>

int fibonacci(int n) {
// i es la iteracion //
    int i = 0;
// fib1 es el primer numero de fibonacci //
    int fib1 = 0;
// fib2 es el segundo numero de fibonacci //
    int fib2 = 1;
// suma es la sucesion de fibonacci //
    int suma = 0;
    while(i<=n) {
// sumo fib1 con fib2 //
        suma = fib1 + fib2;
// fib1 pasa a ser fib2 y fib2 pasa a ser suma //
        fib1 = fib2;
        fib2 = suma;
        i = i + 1;
    }
    return suma;
}

int main() {
    int n = 0;
    std::cout << "Ingrese un numero n: " << std::endl;
    std::cin >> n;
    std::cout << "El n-esimo numero de fibonacci es: " << fibonacci(n) << std::endl;
    return 0;
}
