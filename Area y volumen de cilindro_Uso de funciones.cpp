/******************************************************************************
Nombre: Derek Pacheco
Matricula: A01412042

El programa debe leer el radio y la altura de un cilindro, 
luego llamar a las funciones y finalmente mostrar el área y volumen del cilindro.
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const float PI = 3.1416;

float areaCilindro(float radio, float altura){
    //Variables//
    float resultado;
    
    //Proceso//
    resultado = ( 2 * M_PI * pow(radio, 2) ) + ( 2 * M_PI * radio * altura );
    
    //Salida//
    return resultado;
}

float volumenCilindro(float radio, float altura){
    //Variables//
    float resultado;
    
    //Proceso//
    resultado = M_PI * pow(radio, 2) * altura;
    
    //Salida//
    return resultado;
}

float pideDato(){
    //Variables//
    float dato;
    
    //Proceso//
    cin >> dato;
    
    //Salida//
    return dato;
}

void mostrarValorArea(float valor){
    cout << "area=" << fixed << setprecision(2) << valor << endl;
}

void mostrarValorVolumen(float valor){
    cout << "volumen=" << fixed << setprecision(2) << valor << endl;
}

int main()
{
    //Variables//
    float elRadio, laAltura, resultadoArea, resultadoVolumen;
    
    //Entradas//
    elRadio = pideDato();
    laAltura = pideDato();
    
    //Procesos//
    resultadoArea = areaCilindro(elRadio, laAltura);
    resultadoVolumen = volumenCilindro(elRadio, laAltura);
    
    //Salidas//
    mostrarValorArea(resultadoArea);
    mostrarValorVolumen(resultadoVolumen);

    return 0;
}

