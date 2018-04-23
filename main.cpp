/*
Programa_54

Uso de estructuras o registros

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 5 de mayo de 2015
*/

#include <iostream>
#include<windows.h>

using namespace std;

struct computadora
{
    char marca[25], modelo[15];
    int existencia;
    float precio, descuento;
}pc1, pc2, pc3;

int main()
{
    cout<<"\n\tMarca:                       ";
    cin>>pc1.marca;
    cout<<"\n\tModelo:                      ";
    cin>>pc1.modelo;
    cout<<"\n\tUnidades en existencia:      ";
    cin>>pc1.existencia;
    cout<<"\n\tPrecio:                      ";
    cin>>pc1.precio;
    pc1.descuento=pc1.precio*0.15;
    cout<<"\n\tEl descuento de la computadora "<<pc1.marca;
    cout<<" modelo "<<pc1.modelo<<" es de "<<pc1.descuento<<"\n\n\t";
    system ("pause");

    cout<<"\n\tMarca:                       ";
    cin>>pc2.marca;
    cout<<"\n\tModelo:                      ";
    cin>>pc2.modelo;
    cout<<"\n\tUnidades en existencia:      ";
    cin>>pc2.existencia;
    cout<<"\n\tPrecio:                      ";
    cin>>pc2.precio;
    pc2.descuento=pc2.precio*0.15;
    cout<<"\n\tEl descuento de la computadora "<<pc2.marca;
    cout<<" modelo "<<pc2.modelo<<" es de "<<pc2.descuento<<"\n\n\t";
    system ("pause");

    cout<<"\n\tMarca:                       ";
    cin>>pc3.marca;
    cout<<"\n\tModelo:                      ";
    cin>>pc3.modelo;
    cout<<"\n\tUnidades en existencia:      ";
    cin>>pc3.existencia;
    cout<<"\n\tPrecio:                      ";
    cin>>pc3.precio;
    pc3.descuento=pc3.precio*0.15;
    cout<<"\n\tEl descuento de la computadora "<<pc3.marca;
    cout<<" modelo "<<pc3.modelo<<" es de "<<pc3.descuento<<"\n\n\t";
    system ("pause");




    return 0;
}
