#include "Patleta.h"
#include <iostream>
#include <string>

using namespace std;
// cosntructor
Patleta::Patleta(string _nombre, char _sexo, int _edad, int _altura, double _peso, string _deporte) : Paciente(_nombre, _sexo, _edad, _altura, _peso)
{
    deporte = _deporte;
}

// metodos get-set
void Patleta::setDeporte(string _deporte)
{
    deporte = _deporte;
}

string Patleta::getDeporte()
{
    return deporte;
}

// metodo calcular calorias para atletas polimorfismo
int Patleta::calcularCalorias() const
{
    // Formula para atletas
    if (sexo == 'H')
    {
        return 88.362 + (13.397 * peso) + (4.799 * altura) + 500;
    }
    else if (sexo == 'M')
    {
        return 447.593 + (9.247 * peso) + (3.098 * altura) + 300;
    }
    else
    {
        return 0;
        cout << "Sexo no valido, no se continuara con el calculo." << endl;
    }
}
// metodo virtual puro
void Patleta::datosPaciente() const
{
    cout << "Datos del paciente: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << " anio(s)" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " cm" << endl;
    cout << "Deporte practicado: " << deporte << endl;
    cout << "Consumo calorico recomendado: " << calcularCalorias() << " kcal" << endl;
}
