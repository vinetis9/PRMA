#ifndef STRUKTURA_DANYCH_H
#define STRUKTURA_DANYCH_H
#define MAX 30

struct Drukarka /* STRUKTURA DANYCH*/
{
    char *nazwa[MAX];
    char *typ[MAX];
    int wartosc;
}baza;

struct Lista
{
    struct Lista *nastepny;
    struct Lista *poprzedni;
    struct Drukarka dane;
};
#endif