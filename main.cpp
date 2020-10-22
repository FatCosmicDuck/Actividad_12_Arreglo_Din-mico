#include <iostream>
#include "arreglodinamico.h"

using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Ludnes - BMTH");
    arreglo.insertar_final("Lonely - Brad Sucks");
    arreglo.insertar_final("Obey - BMTH");
    arreglo.insertar_final("Sweater Weather - The Neighbourhood");
    arreglo.insertar_final("Starlight Brigade - Dan Avidan");
    arreglo.insertar_final("Magnum Bullets - Dan Avidan");
    arreglo.insertar_final("Parasite Eve - BMTH");
    arreglo.insertar_final("Still Fell - Half Alive");

    cout << "***Lista de canciones***" << endl;
    cout << "(se agregan 8 ejemplos con el metodo insertar al final)" << endl << endl;
    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << endl;
    }

    arreglo.insertar_inicio("Fourth of July - Sufjan Stevens");
    arreglo.insertar_inicio("Blue Bucket of Gold - Sufjan Stevens");

    cout << endl << "***Lista de canciones***" << endl;
    cout << "(se agregan 2 ejemplos mas con el metodo insertar al principio)" << endl << endl;
    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << endl;
    }

    return 0;
}