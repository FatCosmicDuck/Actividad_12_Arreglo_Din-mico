#include "computadora.h"

Computadora::Computadora(){}

Computadora::Computadora(const string &sistemaOperativo, const string &nombreEquipo, int memoriaRam, int tarjetaGrafica)
{
    this->sistemaOperativo = sistemaOperativo;
    this->nombreEquipo = nombreEquipo;
    this->memoriaRam = memoriaRam;
    this->tarjetaGrafica = tarjetaGrafica;
}

void Computadora::setSistemaOperativo(const string &c)
{
    sistemaOperativo = c;
}

void Computadora::setNombreEquipo(const string &c)
{
    nombreEquipo = c;
}

void Computadora::setMemoriaRam(const int &c)
{
    memoriaRam = c;
}

void Computadora::setTarjetaGrafica(const int &c)
{
    tarjetaGrafica = c;
}

string Computadora::getSistemaOperativo()
{
    return sistemaOperativo;
}

string Computadora::getNombreEquipo()
{
    return nombreEquipo;
}

int Computadora::getMemoriaRam() 
{
    return memoriaRam;
}

int Computadora::getTarjetaGrafica()
{
    return tarjetaGrafica;
}
