#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    2. Napisz w C ANSI program, kt�ry wy�wietla w podw�jnej ramce na monitorze Twoj�
    wizyt�wk�. Imi� i nazwisko jest sta�e, nazwa kierunku wczytywana (informatyka
    dowolnymi literami du�ymi, ma�ymi lub takimi i takimi), rok studi�w (liczba ca�kowita).
    Maj� by� r�wnie� wczytywane dwa znaki, z kt�rych b�d� zbudowane ramki.
*/
    char a[2];                 //znak 1
    char b[2];                 //znak 2
    char S[]=" ";              //spacja
    char O[]="rok:";           //tekst rok
    int r;                     //rok studiow
    char I[] = "Karol";        //imie
    char N[] = "Czerwien";     //nazwisko
    char k[20];                //kierunek

    printf("Podaj kierunek studiow: ");
    scanf("%s",&k);
    printf("Podaj rok studiow: ");
    scanf("%d",&r);
    printf("Podaj pierwszy znak ramki: ");
    scanf("%s",&a);
    printf("Podaj drugi znak ramki: ");
    scanf("%s",&b);

    printf("\n");
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%\n",a,b,S,S,S,S,S,S,I,S,N,S,S,S,S,S,S,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,S,S,S,S,S,S,S,k,S,S,S,S,S,S,S,S,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,S,S,S,S,S,S,S,S,S,S,O,S,r,S,S,S,S,S,S,S,S,S,S,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,S,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,a);
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);


    return 0;
}
