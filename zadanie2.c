#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    2. Napisz w C ANSI program, który wyœwietla w podwójnej ramce na monitorze Twoj¹
    wizytówk¹. Imiê i nazwisko jest sta³e, nazwa kierunku wczytywana (informatyka
    dowolnymi literami du¿ymi, ma³ymi lub takimi i takimi), rok studiów (liczba ca³kowita).
    Maj¹ byæ równie¿ wczytywane dwa znaki, z których bêd¹ zbudowane ramki.
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
