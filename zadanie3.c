#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    3. Napisz w C ANSI program, który wyœwietla w ramce szachownicê 5x5 i numeruje
    ciemne pola. Ramka ma byæ wykreœlana dowolnym znakiem, wczytywanym z klawiatury
    po uruchomieniu programu. Pole szachownicy ma mieæ wymiary 5 na 4 znaki. Ciemne
    pola maj¹ byæ wype³nione dowolnym znakiem wczytywanym (przy ka¿dym uruchomieniu
    programu) z klawiatury.
*/

    char a;                 //znak 1
    char b;                 //znak 2
    char S=" ";            //spacja

    printf("Podaj znak ramki: ");
    scanf("%s",&a);
    printf("Podaj znak pola: ");
    scanf("%s",&b);
    printf("\n");
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%d%s%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%d%s%s%s\n",a,b,b,1,b,b,S,S,S,S,S,b,b,2,b,b,S,S,S,S,S,b,b,3,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,4,b,b,S,S,S,S,S,b,b,5,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%d%s%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%d%s%s%s\n",a,b,b,6,b,b,S,S,S,S,S,b,b,7,b,b,S,S,S,S,S,b,b,8,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,9,b,b,S,S,S,S,S,b,10,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%d%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s%d%s%s%s\n",a,b,11,b,b,S,S,S,S,S,b,12,b,b,S,S,S,S,S,b,13,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,S,S,S,S,S,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);

     return 0;
}
