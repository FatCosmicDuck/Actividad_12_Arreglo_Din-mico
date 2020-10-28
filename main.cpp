#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    Arreglo<Computadora> arreglo;

    // agregar 5 computadoras, de las cuales 3 deben tener 
    // algún atributo con la misma información, el cual
    // servirá para hacer la comparación en la búsqueda lineal
    Computadora c01("Mac", "CosmicDuck", 8, 2);
    Computadora c02("Windows", "CarlosXD", 4, 1);
    Computadora c03("Windows", "Luis034", 16, 4);
    Computadora c04("Ubuntu", "Mel", 4, 2);
    Computadora c05("Windows", "OliverSk", 8, 1);

    arreglo << c01 << c02 << c03 << c04 << c05;

    // buscar() una computadora existente y no existente
    // mostrar la computadora retornada por el método buscar()
    cout << "\t***Primera busqueda***" << endl;
    cout << "_________________________________________________________" << endl;
    Computadora c06("Windows", "Carlos", 4, 1);
    Computadora *ptr = arreglo.buscar(c06);

    if(ptr != nullptr){
    cout << *ptr << endl;
    }
    else{
        cout << "No existe la computadora buscada" << endl;
    }

    Computadora c07("Linux", "Delia", 16, 2);
    Computadora *ptr2 = arreglo.buscar(c07);

    if(ptr2 != nullptr){
    cout << *ptr2 << endl;
    }
    else{
        cout << "No existe la computadora buscada" << endl;
    }

    // buscar_todas() las computadoras usando un objeto
    // de tipo computadora definido previamente
    Arreglo<Computadora*> ptrs = arreglo.buscar_todos(c06);
    
    // mostrar los elementos del Arreglo<Computadora*> retornado
    // por buscar_todos()
    cout << endl << endl;
    cout <<"\t***Segunda busqueda***" << endl;
    cout << "_________________________________________________________" << endl;
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
        
    }
    else{
        cout  << "No existen coincidencias" << endl;
    }
    
    return 0;
}