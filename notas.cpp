//Ingresas la cantidad de estudiantes y la nota de c/u
//Debe haber mas de 6 estudiantes
//Si estudiantes <6 pide mas estudiantes
//Devuelve cuantos aprobaron (nota >=6) y cuantos reprobaron
//Si aprobaron mas de 2/3 de los estudiantes acepta mas estudiantes

#include <iostream>

int aprobaron(int e, int i) {
    int suma = 0;
    while (i<=e) {
        int n = 0;
        std::cout << "Ingrese una nota para el estudiante " << i << std::endl;
        std::cin >> n;
        if(n>=0 && n<=10) {
            if(n>=6) {
                suma = suma +1;
            } else {
                suma = suma +0;
            }
        } else {
        }
        i = i+1;
    }
    return suma;
}

int main() {
    int e = 0;
    std::cout << "Ingrese la cantidad de estudiantes: " << std::endl;
    std::cin >> e;
    int i = 1;
    if(e<=6) {
        std::cout << "Debe haber mas de 6 alumnos en el curso" << std::endl;
        return 1;
    } else {
        int x = aprobaron(e, i);
        std::cout << x << " alumnos aprobaron y " << e - x << " reprobaron." << std::endl;
        if((e*2/3)<x) {
            std::cout << "Se puede incrementar el cupo de alumnos en el curso." << std::endl;
        } else {
        }
        return 0;
    }
}
