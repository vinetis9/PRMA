/*BAZA DANYCH DLA DRUKAREK */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struktura_danych.h"

#define PLIK_TXT "plik.txt"
#define PLIK_BIN "plik.bin"

void zapis_do_tekstowego()
{
   FILE* plz;
   if((plz=fopen(PLIK_TXT, "w"))!=NULL)
   {

   }
    else
   {
       printf("Nie utworzono pliku %s.", PLIK_TXT);
   }
}
void odczyt_tekstowego()
{

}
void zapis_do_binarnego()
{

}
void odczyt_binarnego()
{

}
int main()
{
    int opcja;
    struct Drukarka drukarka;
    printf("Witamy w bazie danych dla drukarek!\n\n");
    printf("Prosimy o wybranie opcji- co chcesz zrobic: \n");
    while(opcja!=0) /*PROGRAM OBSLUGI */
    {

       printf("[1]- Wprowadzenie danych drukarki.\n");
       printf("[2]-Sortowanie.\n");
       printf("[3]-Wydrukuj dane.\n");
       printf("[4]- Usun element.\n");
       printf("[0]- Wyjscie z programu.\n");
       scanf("%d", &opcja);
        switch (opcja)
{
        case 1: wprowadz_dane(&drukarka);
            break;
        case 2: sortuj();
            break;
        case 3: wyswietl_dane();
            break;
        case 4:  usun_element();
            break;
        case 0: printf("Koniec programu.\n");
            return 0;



}
}

}