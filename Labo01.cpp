#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    set<int> conj;
    for(int i = 0;i<s.size();i++) {
        conj.insert(s[i]);
    }

    vector<int> res;
    for(int n : conj) {
        res.push_back(n);
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set<int> conj;
    for(int i = 0;i<s.size();i++) {
        conj.insert(s[i]);
    }

    vector<int> res;
    for(int n : conj) {
        res.push_back(n);
    }
    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    set<int> conju;
    for(int i=0;i<a.size();i++) {
        conju.insert(a[i]);
    }

    int cont = 0;
    for(int i=0;i<b.size();i++) {
        if(conju.count(b[i]) == 1) {
            cont = cont + 1;
        }
    }

    bool res = false;
    if(cont == conju.size()) {
        res = true;
    } else {
        res = false;
    }

    return res;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set<int> conju;
    for(int i=0;i<a.size();i++) {
        conju.insert(a[i]);
    }

    int cont = 0;
    for(int i=0;i<b.size();i++) {
        if(conju.count(b[i]) == 1) {
            cont = cont + 1;
        }
    }

    bool res = false;
    if(cont == conju.size()) {
        res = true;
    } else {
        res = false;
    }

    return res;
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    map<int, int> m;

    for(int i = 0;i < s.size(); i++) {
        int c = 0;
        for(int j = 0;j < s.size(); j++) {
            if(s[i] == s[j]) {
                c = c + 1;
                m[s[i]] = c;
            }
        }
    }
    return m;
}

// Ejercicio 6
int cant_apariciones(int x, vector<int> s) {
    int c = 0;
    for (int i = 0; i < s.size(); i++) {
        if(x == s[i]) {
            c = c + 1;
        }
    }
    return c;
}

vector<int> filtrar_repetidos(vector<int> s) {
    vector<int> res;
    for (int i = 0; i < s.size(); ++i) {
        if(cant_apariciones(s[i],s) == 1) {
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    set<int> conjun;
    for(int n : a) {
        if(b.count(n) == 1) {
            conjun.insert(n);
        }
    }

    return conjun;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    map<int, set<int>> ma;

    for(int i = 0;i<10;i++) {
        int c = 0;
        for(int j = 0; j < s.size();j++) {
            if(s[j] % 10 == i) {
                c=c + 1;
                if (c == 1) {
                    set<int> conjunt;
                } else {
                    conjunt.insert(s[j]);
                    ma[s[j] % 10] = conjunt;
                }
            }
        }
    }
    return ma;
}
