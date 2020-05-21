#include "Prestamos.h"

Prestamos::Prestamos()
{
    //ctor
}

Prestamos::Prestamos(int lib,int user,char fechaP[100])
{
    this->lib=lib;
    this->user=user;
    strcpy(this->fechaP,fechaP);
    this->prestado=1;
    //dtor
}
int Prestamos::ingresarLibro(){
    return this-> lib;
}
int Prestamos::ingresarUsuario(){
    return this->user;
}
void Prestamos::devolver(char fechaD[100]){
    strcpy(this->fechaD,fechaD);
    this->prestado=1;
}
void Prestamos::consultarPrestamo(){
    cout<<"....................PRESTAMO LIBRO.................."<<endl;
    cout<<"Fecha en que se presto: "<<this->fechaP<<endl;
    if (this->prestado==1){
        cout<<"Estado: Ocupado"<<endl;
    }else{
        cout<<"Estado: Devuelto"<<endl;
        cout<<"Fecha en que se devolvio: "<<this->fechaD<<endl;
    }
}
int Prestamos::estadoPrestamo(){
    return this->prestado;
}
