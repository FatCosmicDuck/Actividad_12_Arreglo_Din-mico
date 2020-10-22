#ifndef ARREGLODINAMICO_H_INCLUDED
#define ARREGLODINAMICO_H_INCLUDED

#include <iostream>

using namespace std;

class ArregloDinamico
{
    private:
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

    void expandir();

    public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const string &s);
    void insertar_inicio(const string &s);
    size_t size();

    string operator[](size_t p){
        return arreglo[p];
    }
};

#endif