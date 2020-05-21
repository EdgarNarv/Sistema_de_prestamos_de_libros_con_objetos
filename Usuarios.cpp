#include "Usuarios.h"
#include <iostream>
#include <cstring>

using namespace std;
Usuarios::Usuarios()
{
    //ctor
}

Usuarios::Usuarios(char nombreU[100],char apellido[100],int edad,char nacionalidad[100])
{
    strcpy(this->nombreU,nombreU);
    strcpy(this->apellido,apellido);
    this->edad=edad;
    strcpy(this->nacionalidad,nacionalidad);
}

void Usuarios::toString(){
    cout<<".......Datos Usuarios......."<<endl;
    cout<<endl;
    cout<<"Nombre: "<<this->nombreU<<" "<<this->apellido<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"Nacionalidad: "<<this->nacionalidad<<endl;
    cout<<"............................"<<endl;
}
