#ifndef PLIK_NAGLOWKOWY_H_INCLUDED
#define PLIK_NAGLOWKOWY_H_INCLUDED
#define MAX 30

struct Drukarka /* STRUKTURA DANYCH*/
{
    char nazwa[MAX];
    char typ[MAX];
    int wartosc;
}baza;

struct Lista
{
    struct Lista *nastepny;
    struct Lista *poprzedni;
    struct Drukarka dane;
};
#endif
