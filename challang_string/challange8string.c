#include<stdio.h>
#include<string.h>


int main()
{

    char n[50];

    printf("Entrer le message : ");
    scanf(" %[^\n]s",n);

    printf("Les caracter en minuscules est : %s",strlwr(n));

    return 0;
}