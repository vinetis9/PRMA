#include "plik_naglowkowy.h"
#define MAX 30

int wedlug_nazwy(const void *wsk_1, const void *wsk_2)
{
    struct Drukarka *nazwa_1=(struct Drukarka*)wsk_1;
    struct Drukarka *nazwa_2=(struct Drukarka*)wsk_2;
    return(strcmp(nazwa_1->nazwa, nazwa_2->nazwa));
}
int wedlug_typu(const void *wsk_1, const void *wsk_2)
{
    struct Drukarka *typ_1=(struct Drukarka*)wsk_1;
    struct Drukarka *typ_2=(struct Drukarka*)wsk_2;
    return (strcmp(typ_1->typ, typ_2->typ));
}
int wedlug_wartosci( *wsk_1, const void *wsk_2)
{
}



void wprowadz_dane(struct Drukarka *d)
{
   char nazwa_drukarki[MAX];
   char typ_drukarki[MAX];
   int wartosc_drukarki;
   printf("Podaj nazwe drukarki: \n");
   scanf("%s", nazwa_drukarki);
   strcpy(d->nazwa, nazwa_drukarki);
   printf("Podaj typ drukarki: \n");
   scanf("%s", typ_drukarki);
   strcpy(d->typ, typ_drukarki);
   printf("Podaj wartosc drukarki: \n");
   scanf("%d", &wartosc_drukarki);
   d->wartosc=wartosc_drukarki;
}

void sortuj(struct Drukarka *d)
{
   int opcja;
   printf("Wedlug czego posortowac?\n");
   printf("[1]-Wedlug nazwy \n");
   printf("[2]- Wedlug typu \n");
   printf("[3]- Wedlug wartosci \n");
   scanf("%d", &opcja);
   switch (opcja)
   {
        case 1:
            qsort()



            break;
        case 2:
            break;
        case 3:
            break;
   }
}
void wyswietl_dane()
{

}
void usun_element()
{

}
