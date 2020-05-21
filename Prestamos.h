#ifndef PRESTAMOS_H
#define PRESTAMOS_H
#include <iostream>
#include <cstring>

using namespace std;

class Prestamos
{
    public:
        Prestamos();
        Prestamos(int,int,char[100]);
        int ingresarLibro();
        int ingresarUsuario();
        int estadoPrestamo();
        void devolver(char[]);
        void consultarPrestamo();
    private:
        int lib=0;
        int user=0;
        char fechaP[100];
        char fechaD[100];
        int prestado=0;

};

#endif // PRESTAMOS_H
