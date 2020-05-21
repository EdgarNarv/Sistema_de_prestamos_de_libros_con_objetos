#ifndef BOOKS_H
#define BOOKS_H


class Books
{
    public:
        Books();
        Books(char [],char[],char [],char[],char [],int);
        void editar();
        void toString();

    private:
        char titulo[100];
        char autor[100];
        char isbn[100];
        char editorial[100];
        char genero[100];
        int annio;

};

#endif // BOOKS_H
