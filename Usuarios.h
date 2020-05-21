#ifndef USUARIOS_H
#define USUARIOS_H


class Usuarios
{
    public:
        Usuarios();
        Usuarios(char [], char [],int,char []);
        void toString();
    private:
        char nombreU[100];
        char apellido[100];

        int edad;
        char nacionalidad[100];
};

#endif // USUARIOS_H
