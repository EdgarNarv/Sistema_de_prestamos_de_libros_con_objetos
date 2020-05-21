#include <iostream>
#include "Books.h"
#include "Usuarios.h"
#include "Prestamos.h"
using namespace std;
void menu(){
    cout<<".............MENU............."<<endl;
    cout<<".  1.Administrar usuarios    ."<<endl;
    cout<<".  2.Administrar libros      ."<<endl;
    cout<<".  3.Administrar prestamos   ."<<endl;
    cout<<".............................."<<endl;
}
void menuLibros(){
    cout<<".......MENU........."<<endl;
    cout<<". 1.Registrar      ."<<endl;
    cout<<". 2.Editar         ."<<endl;
    cout<<". 3.Consultar      ."<<endl;
    cout<<". 4.Eliminar       ."<<endl;
    cout<<". 5.Menu Principal ."<<endl;
    cout<<"...................."<<endl;
}
void menuUsuarios(){
    cout<<".......MENU........."<<endl;
    cout<<". 1.Registrar      ."<<endl;
    cout<<". 2.Editar         ."<<endl;
    cout<<". 3.Consultar      ."<<endl;
    cout<<". 4.Eliminar       ."<<endl;
    cout<<". 5.Menu Principal ."<<endl;
    cout<<"...................."<<endl;
}
void menuPrestamos(){
    cout<<".......MENU........."<<endl;
    cout<<". 1.Prestamo       ."<<endl;
    cout<<". 2.Devolver       ."<<endl;
    cout<<". 3.Consultar      ."<<endl;
    cout<<". 4.Menu Principal ."<<endl;
    cout<<"...................."<<endl;
}


void mostrarLibros(Books libros[10],int booksC){
    cout<<"........Libros Disponibles......."<<endl;
    for (int x = 0; x < booksC; ++x)
    {
        cout<<"Libro "<<x<<":"<<endl;
        libros[x].toString();
    }
    cout<<"................................."<<endl;
}
Prestamos registroPrestamos(int lib)
{
    int user=0;
    char fechaP[100];

    cout<<"No. de usuario"<<endl;
    cin>>user;
    cout<<"Fecha en la que se presta el libro"<<endl;
    cin>>fechaP;

    return Prestamos(user,lib,fechaP);
}

int main()
{
    Books libros[10];
    Usuarios usuario[10];
    Prestamos prestamo[100];

    char titulo [100],autor[100],nombreU[100],fechaD[100],apellido[100],isbn[100],
    editorial[100],genero[100],nacionalidad[100];

    int bookC=0,userC=0,prestamoC=0,op,edad,num,annio;

    bool on=true,prestar=true;

    while (on==true){
        menu();
        cin>>op;
        switch(op){
            case 1:
                menuUsuarios();
                cin>>op;
                switch (op){
                    case 1:
                        cout<<".......Registrar........"<<endl;
                        if (userC<10){
                            cout<<"Ingrese su nombre"<<endl;
                            cin>>nombreU;
                            cout<<"Ingrese su apellido"<<endl;
                            cin>>apellido;
                            cout<<"Ingrese su edad"<<endl;
                            cin>>edad;
                            cout<<"Ingrese su nacionalidad"<<endl;
                            cin>>nacionalidad;
                            cout<<"No. de Usuario: "<<userC<<endl;
                            usuario[userC]=Usuarios(nombreU,apellido,edad,nacionalidad);
                            userC++;
                        }else{
                            cout<<"Llegamos al limite de usuarios"<<endl;
                        }

                        break;
                    case 2:

                        cout<<".........Editar.........."<<endl;
                        cout<<"Ingrese el numero de usuario"<<endl;
                        cin>>num;
                        cout<<"Ingrese su nombre"<<endl;
                        cin>>nombreU;
                        cout<<"Ingrese su apellido"<<endl;
                        cin>>apellido;
                        cout<<"Ingrese su edad"<<endl;
                        cin>>edad;
                        cout<<"INgrese su nacionalidad"<<endl;
                        cin>>nacionalidad;
                        usuario[num]=Usuarios(nombreU,apellido,edad,nacionalidad);
                        usuario[num].toString();
                        break;
                    case 3:
                        cout<<"...........Consultar............."<<endl;
                        cout<<"Ingrese el numero de usuario"<<endl;
                        cin>>num;
                        usuario[num].toString();
                        cout<<".................................."<<endl;
                        cout<<endl;
                        cout<<".................................."<<endl;
                        cout<<"           Prestamos              "<<endl;
                        cout<<".................................."<<endl;
                        cout<<endl;
                        for (int x=0;x<=prestamoC;x++){
                            if (prestamo[x].ingresarUsuario()==num){

                                libros[prestamo[num].ingresarUsuario()].toString();

                                prestamo[x].consultarPrestamo();
                            }
                        }
                        break;
                    case 4:
                        cout<<"...........Eliminar............"<<endl;
                        cout<<"Ingrese el numero de usuario"<<endl;
                        cin>>num;
                        usuario[num]=Usuarios();
                        cout<<"     Usuario eliminado         "<<endl;
                        cout<<"..............................."<<endl;
                        break;
                    default:
                        cout<<"..........Menu principal........."<<endl;
                        break;

                    }
                    break;
            case 2:
                menuLibros();
                cin>>op;
                switch(op){
                    case 1:
                        cout<<".....Registrar libro......"<<endl;
                        cout<<endl;
                        cout<<"Ingrese el titulo"<<endl;
                        cin>>titulo;
                        cout<<"Ingrese el annio de publicacion"<<endl;
                        cin>>annio;
                        cout<<"Ingrese su genero"<<endl;
                        cin>>genero;
                        cout<<"Ingrese la editorial"<<endl;
                        cin>>editorial;
                        cout<<"Ingrese el ISBN"<<endl;
                        cin>>isbn;
                        cout<<"Ingrese el autor"<<endl;
                        cin>>autor;
                        cout<<endl;
                        cout<<"........Libro registrado con exito......."<<endl;
                        cout<<"No. Libro: "<<bookC<<endl;
                        libros[bookC]=Books(titulo,autor,isbn,editorial,genero,annio);
                        bookC++;
                        break;
                    case 2:
                        cout<<".............Editar Libro............."<<endl;
                        cout<<endl;
                        cout<<"Ingrese el numero del libro a editar"<<endl;
                        cin>>num;
                        cout<<endl;
                        cout<<"Ingrese el titulo"<<endl;
                        cin>>titulo;
                        cout<<"Ingrese el annio de publicacion"<<endl;
                        cin>>annio;
                        cout<<"Ingrese su genero"<<endl;
                        cin>>genero;
                        cout<<"Ingrese la editorial"<<endl;
                        cin>>editorial;
                        cout<<"Ingrese el ISBN"<<endl;
                        cin>>isbn;
                        cout<<"Ingrese el autor"<<endl;
                        cin>>autor;
                        cout<<endl;
                        cout<<".........Libro editado con exito........"<<endl;

                        libros[num]=Books(titulo,autor,isbn,editorial,genero,annio);
                        break;
                    case 3:
                        cout<<".........Consultar Libro..........."<<endl;
                        cout<<"Ingrese el numero de libro"<<endl;
                        cin>>num;
                        libros[num].toString();
                        cout<<".................................."<<endl;
                        cout<<"           Prestamos              "<<endl;
                        cout<<"..................................."<<endl;
                        for (int x=0;x<=prestamoC;x++){
                            if (prestamo[x].ingresarLibro()==num){
                                usuario[prestamo[num].ingresarUsuario()].toString();

                                prestamo[x].consultarPrestamo();
                            }
                        }

                        break;
                    case 4:
                        cout<<"Ingrese el numero de libro"<<endl;
                        cin>>num;
                        libros[num]=Books();
                        cout<<"Libro eliminado"<<endl;
                        break;
                    default:
                        cout<<"Menu Principal"<<endl;
                        break;
                }
                break;
            case 3:
                menuPrestamos();
                cin>>op;
                switch(op){
                    case 1:
                        cout<<".................Prestamos............"<<endl;

                        mostrarLibros(libros,bookC);
                        cout<<endl;
                        cout<<"Ingrese el numero del libro"<<endl;
                        cin>>num;

                        prestar=true;
                        for (int x=0;x<=prestamoC;x++){
                            if (num==prestamo[x].ingresarLibro() && prestamo[x].estadoPrestamo()==1){
                                prestar=false;
                            }
                        }
                        if (prestar==true){
                            prestamo[prestamoC]=registroPrestamos(num);
                            cout<<"..........Prestamo Realizado.........."<<endl;
                            cout<<"No. Prestamo: "<<prestamoC<<endl;
                            prestamoC++;
                        }else{
                            cout<<"Este libro ya ha sido prestado"<<endl;
                        }

                        break;
                    case 2:
                        cout<<".............Devolucion.............."<<endl;
                        cout<<"No. Prestamo"<<endl;
                        cin>>num;
                        cout<<endl;
                        cout<<"....................................."<<endl;
                        libros[prestamo[num].ingresarLibro()].toString();
                        cout<<"....................................."<<endl;
                        cout<<endl;
                        cout<<"....................................."<<endl;
                        prestamo[num].consultarPrestamo();
                        cout<<"....................................."<<endl;

                        if (prestamo[num].estadoPrestamo()==1){
                            cout<<"Fecha devolucion"<<endl;
                            cin>>fechaD;

                            prestamo[num].devolver(fechaD);

                            cout<<".........Libro Devuelto........"<<endl;

                        }else{
                            cout<<"..El libro ya ha sido devuelto.."<<endl;
                        }
                        break;
                    case 3:
                        cout<<"........Consultar Prestamos........."<<endl;
                        cout<<"Numero de prestamo:"<<endl;
                        cin>>num;
                        cout<<"...................................."<<endl;
                        cout<<endl;
                        cout<<"...................................."<<endl;
                        usuario[prestamo[num].ingresarUsuario()].toString();
                        cout<<"...................................."<<endl;
                        cout<<endl;
                        cout<<"...................................."<<endl;
                        libros[prestamo[num].ingresarLibro()].toString();
                        cout<<"...................................."<<endl;
                        cout<<endl;
                        cout<<"...................................."<<endl;
                        prestamo[num].consultarPrestamo();
                        cout<<"...................................."<<endl;
                        break;
                    default:
                        cout<<".............Menu principal............."<<endl;
                        break;

                }
                break;
            default:
                cout<<".....Vuelva Pronto....."<<endl;
                on=false;
                break;
        }
    }
    return 0;
}
