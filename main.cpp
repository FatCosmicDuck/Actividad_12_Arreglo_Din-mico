#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<string> arreglo;
    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_final("Cicles");
    arreglo.insertar_final("Sweater Weather");
    arreglo.insertar_final("Daddy Issues");
    arreglo.insertar_final("Afraid");
    arreglo.insertar_inicio("Pretty Boy");
    arreglo.insertar_inicio("Starlight Brigade");
    arreglo.insertar_inicio("Magnum Bullets");
    arreglo.insertar_inicio("Teardrops");

    // mostrar() los elementos de arreglo
    cout << "\tLista de canciones" << endl;
    cout << "\t______________________________" << endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << "\t" << i << ".- " << arreglo[i] << endl;
    }
    cout << endl << endl;

    // insertar() el elemento en la posición 2
    arreglo.insertar("Jellyfish", 2);

    // mostrar los elementos de arreglo
    cout << "\tLista de canciones" << endl;
    cout << "\t______________________________" << endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << "\t" << i << ".- " << arreglo[i] << endl;
    }
    cout << endl << endl;

    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);

    // mostrar() los elementos de arreglo
    cout << "\tLista de canciones" << endl;
    cout << "\t______________________________" << endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << "\t" << i << ".- " << arreglo[i] << endl;
    }
    cout << endl << endl;
    
    return 0;
}