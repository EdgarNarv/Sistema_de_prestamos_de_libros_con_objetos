#include "Books.h"
#include <iostream>
#include <cstring>

using namespace std;

Books::Books()
{
    //ctor
}

Books::Books(char titulo[100],char autor[100],char isbn[100],char editorial[100],char genero[100],int annio)
{
    strcpy(this->titulo,titulo);
    strcpy(this->autor,autor);
    strcpy(this->isbn,isbn);
    strcpy(this->genero,genero);
    strcpy(this->editorial,editorial);
    this->annio=annio;
}
/*void Books::registrar(){
    cout<<"......Ingrese el titulo del libro......."<<endl;
    cin>>this->titulo;
    cout<<".......Ingrese el nombre del autor......"<<endl;
    cin>>this->autor;
    cout<<endl;
    cout<<".......Libro registrado con exito......."<<endl;
}*/




void Books::toString(){
    cout<<".............................."<<endl;
    cout<<"Titulo: "<<this->titulo<<endl;
    cout<<"Autor: "<<this->autor<<endl;
    cout<<"ISBN: "<<this->isbn<<endl;
    cout<<"Genero: "<<this->genero<<endl;
    cout<<"Editorial: "<<this->editorial<<endl;
    cout<<"Annio: "<<this->annio<<endl;
    cout<<".............................."<<endl;
}
