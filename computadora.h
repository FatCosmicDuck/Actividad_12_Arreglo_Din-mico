#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    private:
    string sistemaOperativo;
    string nombreEquipo;
    int memoriaRam;
    int tarjetaGrafica;

    public:
    Computadora();
    Computadora(const string &sistemaOperativo, const string &nombreEquipo, int memoriaRam, int tarjetaGrafica);
    
    void setSistemaOperativo(const string &c);
    void setNombreEquipo(const string &c);
    void setMemoriaRam(const int &c);
    void setTarjetaGrafica(const int &c);

    string getSistemaOperativo();
    string getNombreEquipo();
    int getMemoriaRam();
    int getTarjetaGrafica();

    friend ostream& operator<<(ostream &out, const Computadora &c){
        out << left ; 
        out << setw(20) << c.sistemaOperativo;
        out << setw(21) << c.nombreEquipo;
        out << setw(15) << c.memoriaRam;
        out << setw(16) << c.tarjetaGrafica;
        out << endl;
        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c){
        
        cout << "Sistema Operativo: ";
        getline(cin, c.sistemaOperativo);
        
        cout << "Nombre Equipo: ";
        getline(cin, c.nombreEquipo);

        cout << "Memoria Ram: ";
        cin >> c.memoriaRam;

        cout << "Tarjeta Grafica: ";
        cin >> c.tarjetaGrafica;

        return in;
    }

    bool operator==(const Computadora& c)
    {
        return sistemaOperativo == c.sistemaOperativo;
    }

    bool operator==(const Computadora& c) const
    {
        return sistemaOperativo == c.sistemaOperativo;
    }
};

#endif //COMPUTADORA_H_INCLUDED