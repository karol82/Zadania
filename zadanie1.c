#include <stdio.h>

int zadanie1()
{
/*
    1. Napisz w C ANSI program, który wczytuje dowolne dwa znaki, a następnie wypisuje
    obok siebie duże, drukowane litery A i B. Z tym, że litera A wypisywana jest pierwszym
    znakiem wczytanym w programie a litera B drugim. Wysokość liter14 znaków a
    szerokość każdej litery powinna wynosić 10 znaków.
*/

    char a[2];
    char b[2];
    printf("Program rysuje dwie litery A i B z dwoch dowolnych znakow.\n");
    printf("Podaj pierwszy znak: ");
    scanf("%s",&a);
    printf("Podaj drugi znak: ");
    scanf("%s",&b);

    printf("____________________________\n");
    printf("|                          |\n");
    printf("|      %s%s      %s%s%s%s%s       |\n",a,a,b,b,b,b,b);
    printf("|     %s  %s     %s    %s%s     |\n",a,a,b,b,b);
    printf("|     %s  %s     %s      %s%s   |\n",a,a,b,b,b);
    printf("|     %s  %s     %s       %s   |\n",a,a,b,b);
    printf("|    %s%s  %s%s    %s     %s%s    |\n",a,a,a,a,b,b,b);
    printf("|    %s    %s    %s    %s%s     |\n",a,a,b,b,b);
    printf("|    %s    %s    %s%s%s%s%s%s      |\n",a,a,b,b,b,b,b,b);
    printf("|    %s    %s    %s     %s%s    |\n",a,a,b,b,b);
    printf("|   %s%s    %s%s   %s      %s%s   |\n",a,a,a,a,b,b,b);
    printf("|   %s%s%s%s%s%s%s%s   %s        %s  |\n",a,a,a,a,a,a,a,a,b,b);
    printf("|   %s      %s   %s        %s  |\n",a,a,b,b);
    printf("|  %s%s      %s%s  %s      %s%s   |\n",a,a,a,a,b,b,b);
    printf("|  %s        %s  %s     %s%s    |\n",a,a,b,b,b);
    printf("|  %s        %s  %s%s%s%s%s%s%s     |\n",a,a,b,b,b,b,b,b,b);
    printf("|__________________________|\n");


    return 0;
}
